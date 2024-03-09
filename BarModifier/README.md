<h1 align="justify">Bar Modifier Templates</h1>

> [!WARNING]
> Always remember to modify `AppName-AppAuthor`.

<h2 align="justify">How Update Properly Your App</h2>

> [!TIP]
> Assign the actions to a variable and call it every time you need it.
> ```ini
> AppName-AppAuthor___TopBar_Update=
> ```

- Using only App icon

    ```ini
    [!UpdateMeterGroup CustomApp[#AppName-AppAuthor]Sys "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
    ```

- Using app icon and text

    ```ini
    [!UpdateMeterGroup AppName-AppAuthor "Droptop\DropdownBar"][!UpdateMeterGroup CustomApp[#AppName-AppAuthor]Sys "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!UpdateMeterGroup HL "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
    ```

<h1></h1>

<details>
    <summary>GreyScale Icons Templates</summary>

<br>

- [Adding hideable text/icon](https://github.com/KazukiGames82/Community-Apps-Templates/blob/main/BarModifier/GreyScale-Icons/Template-1/BarModifier.inc)
- [Adding two or more hideable text/icon](https://github.com/KazukiGames82/Community-Apps-Templates/blob/main/BarModifier/GreyScale-Icons/Template-2/BarModifier.inc)

<br>

- Make less visible app icon when no internet
- Hide app text when no internet

<h1></h1>

</details>

<details>
    <summary>Full Color Icons Templates</summary>

<br>

- Adding hideable text/icon
- Adding two or more hideable text/icon

<br>

- Make less visible app icon when no internet
- Hide app text when no internet

</details>