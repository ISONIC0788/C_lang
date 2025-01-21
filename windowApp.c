#include <windows.h>
#include <stdio.h>

#define ID_USERNAME 1
#define ID_PASSWORD 2
#define ID_LOGIN_BUTTON 3

// Window procedure function to handle messages
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    static HWND hwndUsername, hwndPassword, hwndButton;
    char username[100], password[100];

    switch (uMsg) {
        case WM_CREATE:
            // Create the Username label
            CreateWindowEx(0, "STATIC", "Username:", WS_VISIBLE | WS_CHILD, 
                           50, 50, 100, 25, hwnd, NULL, GetModuleHandle(NULL), NULL);

            // Create the Username input box (Edit Control)
            hwndUsername = CreateWindowEx(0, "EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER,
                                          150, 50, 200, 25, hwnd, (HMENU)ID_USERNAME, GetModuleHandle(NULL), NULL);

            // Create the Password label
            CreateWindowEx(0, "STATIC", "Password:", WS_VISIBLE | WS_CHILD, 
                           50, 100, 100, 25, hwnd, NULL, GetModuleHandle(NULL), NULL);

            // Create the Password input box (Edit Control)
            hwndPassword = CreateWindowEx(0, "EDIT", "", WS_VISIBLE | WS_CHILD | WS_BORDER | ES_PASSWORD,
                                          150, 100, 200, 25, hwnd, (HMENU)ID_PASSWORD, GetModuleHandle(NULL), NULL);

            // Create the Login button
            hwndButton = CreateWindowEx(0, "BUTTON", "Login", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,
                                        150, 150, 100, 30, hwnd, (HMENU)ID_LOGIN_BUTTON, GetModuleHandle(NULL), NULL);

            return 0;

        case WM_COMMAND:
            if (LOWORD(wParam) == ID_LOGIN_BUTTON) {  // If Login button is clicked
                // Get the text from the Username and Password Edit controls
                GetWindowText(hwndUsername, username, sizeof(username));
                GetWindowText(hwndPassword, password, sizeof(password));

                // Simple username and password check
                if (strcmp(username, "admin") == 0 && strcmp(password, "password123") == 0) {
                    MessageBox(hwnd, "Login Successful", "Success", MB_OK | MB_ICONINFORMATION);
                } else {
                    MessageBox(hwnd, "Invalid Username or Password", "Error", MB_OK | MB_ICONERROR);
                }
            }
            return 0;

        case WM_CLOSE:  // If the window close button is clicked
            PostQuitMessage(0);  // Post a quit message to the message queue
            return 0;

        case WM_DESTROY:  // If the window is destroyed
            PostQuitMessage(0);
            return 0;

        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);  // Default message handling
    }
}

// Entry point of the application
int main() {
    // Define a window class
    WNDCLASS wc = {0};
    wc.lpfnWndProc = WindowProc;  // Set the window procedure function
    wc.hInstance = GetModuleHandle(NULL);  // Get the current instance handle
    wc.lpszClassName = "LoginFormClass";  // Name of the window class

    // Register the window class
    if (!RegisterClass(&wc)) {
        MessageBox(NULL, "Window class registration failed!", "Error", MB_OK | MB_ICONERROR);
        return 1;
    }

    // Create the window
    HWND hwnd = CreateWindowEx(
        0,                        // Optional window styles
        wc.lpszClassName,         // Window class name
        "Login Form",             // Window title
        WS_OVERLAPPEDWINDOW,      // Window style
        CW_USEDEFAULT, CW_USEDEFAULT, 400, 300,  // Position and size
        NULL,                     // Parent window
        NULL,                     // Menu
        wc.hInstance,             // Instance handle
        NULL                      // Additional application data
    );

    if (hwnd == NULL) {
        MessageBox(NULL, "Window creation failed!", "Error", MB_OK | MB_ICONERROR);
        return 1;
    }

    // Show the window
    ShowWindow(hwnd, SW_SHOWNORMAL);
    UpdateWindow(hwnd);

    // Message loop
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);  // Translates keyboard messages
        DispatchMessage(&msg);   // Dispatches the message to the window procedure
    }

    return 0;
}
