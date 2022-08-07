#include <switch.h>

#include "language.hpp"

// TODO: Japanese
static const char *strings_jp[] {
    "OK",
    "Cancel",

    "Options",
    "Select All",
    "Clear All",
    "Properties",
    "Rename",
    "New Folder",
    "New File",
    "Copy",
    "Move",
    "Paste",
    "Delete",
    "Set Archive Bit",
    "Enter name",
    "Enter folder name",
    "Enter file name",
    "Copying:",

    "Name: ",
    "Size: ",
    "Created: ",
    "Modified: ",
    "Accessed: ",
    "Width: ",
    "Height: ",

    "This action cannot be undone.",
    "Do you wish to delete the following:",
    "Do you wish to delete ",

    "Extract archive",
    "This action may take a while.",
    "Do you wish to extract ",
    "Extracting:",

    "Settings",
    "Sort Settings",
    "Language",
    "USB",
    "Unmount USB devices",
    "Image Viewer",
    "Developer Options",
    "Multiple Character Set (Improves boot speed when disabled)",
    "About",
    "Check for Updates",
    " Display filename",
    " Enable logs",
    " Enable support for special symbols/characters",
    "version",
    "Author",
    "Banner",

    "Update",
    "Could not connect to network.",
    "An update is available.",
    "Do you wish to download and install NX-Shell version ",
    "Update was successful.",
    "Please exit and rerun the application.",
    "You are on the latest version.",

    "Do you wish to unmount all the connected USB devices?",
    "The USB device can now be safely removed.",

    "The name cannot be empty."
};

static const char *strings_en[] {
    "OK",
    "Cancel",

    "Options",
    "Select All",
    "Clear All",
    "Properties",
    "Rename",
    "New Folder",
    "New File",
    "Copy",
    "Move",
    "Paste",
    "Delete",
    "Set Archive Bit",
    "Enter name",
    "Enter folder name",
    "Enter file name",
    "Copying:",

    "Name: ",
    "Size: ",
    "Created: ",
    "Modified: ",
    "Accessed: ",
    "Width: ",
    "Height: ",

    "This action cannot be undone.",
    "Do you wish to delete the following:",
    "Do you wish to delete ",

    "Extract archive",
    "This action may take a while.",
    "Do you wish to extract ",
    "Extracting:",

    "Settings",
    "Sort Settings",
    "Language",
    "USB",
    "Unmount USB devices",
    "Image Viewer",
    "Developer Options",
    "Multiple Character Set (Improves boot speed when disabled)",
    "About",
    "Check for Updates",
    " Display filename",
    " Enable logs",
    " Enable support for special symbols/characters",
    "version",
    "Author",
    "Banner",

    "Update",
    "Could not connect to network.",
    "An update is available.",
    "Do you wish to download and install NX-Shell version ",
    "Update was successful.",
    "Please exit and rerun the application.",
    "You are on the latest version.",

    "Do you wish to unmount all the connected USB devices?",
    "The USB device can now be safely removed.",

    "The name cannot be empty."
};

// TODO: French
static const char *strings_fr[] {
    "OK",
    "Cancel",

    "Options",
    "Select All",
    "Clear All",
    "Properties",
    "Rename",
    "New Folder",
    "New File",
    "Copy",
    "Move",
    "Paste",
    "Delete",
    "Set Archive Bit",
    "Enter name",
    "Enter folder name",
    "Enter file name",
    "Copying:",

    "Name: ",
    "Size: ",
    "Created: ",
    "Modified: ",
    "Accessed: ",
    "Width: ",
    "Height: ",

    "This action cannot be undone.",
    "Do you wish to delete the following:",
    "Do you wish to delete ",

    "Extract archive",
    "This action may take a while.",
    "Do you wish to extract ",
    "Extracting:",

    "Settings",
    "Sort Settings",
    "Language",
    "USB",
    "Unmount USB devices",
    "Image Viewer",
    "Developer Options",
    "Multiple Character Set (Improves boot speed when disabled)",
    "About",
    "Check for Updates",
    " Display filename",
    " Enable logs",
    " Enable support for special symbols/characters",
    "version",
    "Author",
    "Banner",

    "Update",
    "Could not connect to network.",
    "An update is available.",
    "Do you wish to download and install NX-Shell version ",
    "Update was successful.",
    "Please exit and rerun the application.",
    "You are on the latest version.",

    "Do you wish to unmount all the connected USB devices?",
    "The USB device can now be safely removed.",

    "The name cannot be empty."
};

static const char *strings_de[] {
    "OK",
    "Abbrechen",

    "Optionen",
    "Alle auswählen",
    "Alle entfernen",
    "Eigenschaften",
    "Umbenennen",
    "Neuer Ordner",
    "Neue Datei",
    "Kopieren",
    "Verschieben",
    "Einfügen",
    "Löschen",
    "\"Archive Bit\" setzen",
    "Name eingeben",
    "Ordnername eingeben",
    "Dateiname eingeben",
    "Kopiere:",

    "Name: ",
    "Größe: ",
    "Erstellt: ",
    "Geändert: ",
    "Zugegriffen: ",
    "Breite: ",
    "Höhe: ",

    "Dies kann nicht rückgängig gemacht werden.",
    "Möchten Sie Folgendes löschen:",
    "Möchten Sie Folgendes löschen:",

    "Archiv entpacken",
    "Dies kann eine Weile dauern.",
    "Möchten Sie Folgendes extrahieren:",
    "Extrahiere:",

    "Einstellungen",
    "Sortiereinstellung",
    "Sprache",
    "USB",
    "Unmount USB devices",
    "Bildanzeige",
    "Entwickleroptionen",
    "Multiple Character Set (Improves boot speed when disabled)",
    "Über",
    "Nach Updates suchen",
    " Dateiname anzeigen",
    " Log aktivieren",
    " Enable support for special symbols/characters",
    "Version",
    "Autor",
    "Banner",

    "Update",
    "Es konnte keine Verbindung zum Netzwerk herstellt werden.",
    "Ein Update ist verfügbar.",
    "Möchten Sie die folgende NX-Shell-Version herunterladen und installieren:",
    "Update war erfolgreich.",
    "Bitte beenden Sie die Anwendung und starten Sie sie erneut.",
    "Sie sind bereits auf der neusten Version.",

    "Do you wish to unmount all the connected USB devices?",
    "The USB device can now be safely removed.",

    "Der Name darf nicht leer sein."
};

// TODO: Italian
static const char *strings_it[] {
    "OK",
    "Cancel",

    "Options",
    "Select All",
    "Clear All",
    "Properties",
    "Rename",
    "New Folder",
    "New File",
    "Copy",
    "Move",
    "Paste",
    "Delete",
    "Set Archive Bit",
    "Enter name",
    "Enter folder name",
    "Enter file name",
    "Copying:",

    "Name: ",
    "Size: ",
    "Created: ",
    "Modified: ",
    "Accessed: ",
    "Width: ",
    "Height: ",

    "This action cannot be undone.",
    "Do you wish to delete the following:",
    "Do you wish to delete ",

    "Extract archive",
    "This action may take a while.",
    "Do you wish to extract ",
    "Extracting:",

    "Settings",
    "Sort Settings",
    "Language",
    "USB",
    "Unmount USB devices",
    "Image Viewer",
    "Developer Options",
    "Multiple Character Set (Improves boot speed when disabled)",
    "About",
    "Check for Updates",
    " Display filename",
    " Enable logs",
    " Enable support for special symbols/characters",
    "version",
    "Author",
    "Banner",

    "Update",
    "Could not connect to network.",
    "An update is available.",
    "Do you wish to download and install NX-Shell version ",
    "Update was successful.",
    "Please exit and rerun the application.",
    "You are on the latest version.",

    "Do you wish to unmount all the connected USB devices?",
    "The USB device can now be safely removed.",

    "The name cannot be empty."
};

//  Spanish
static const char *strings_es[] {
    "Aceptar",
    "Cancelar",

    "Opciones",
    "Seleccionar Todo",
    "Limpiar Todo",
    "Propiedades",
    "Renombrar",
    "Nueva Carpeta",
    "Nuevo Archivo",
    "Copiar",
    "Mover",
    "Pegar",
    "Eliminar",
    "Establecer Bit de Archivo",
    "Ingresar Nombre",
    "Ingresar Nombre de Carpeta",
    "Ingresar Nombre de Archivo",
    "Copiando:",

    "Nombre: ",
    "Tamaño: ",
    "Creado: ",
    "Modificado: ",
    "Accedido: ",
    "Ancho: ",
    "Alto: ",

    "Esta acción no se puede deshacer.",
    "Deseas eliminar lo siguiente:",
    "Deseas eliminar ",

    "Extraer archivo",
    "Esta acción puede tomar un tiempo.",
    "Deseas extraer ",
    "Extrayendo:",

    "Ajustes",
    "Ajustes de organización",
    "Idioma",
    "USB",
    "Unmount USB devices",
    "Visualizador de Imagen",
    "Opciones de Desarrollador",
    "Multiple Character Set (Improves boot speed when disabled)",
    "Acerca de",
    "Buscar Actualizaciones",
    " Mostrar nombre de archivo",
    " Habilitar logs",
    " Enable support for special symbols/characters",
    "versión",
    "Autor",
    "Banner",

    "Actualizar",
    "No se puede conectar a la red.",
    "Una actualización está disponible.",
    "Deseas descargar e instalar la versión de NX-Shell ",
    "Actualización exitosa.",
    "Por favor cerrar y reiniciar la aplicación.",
    "Estás en la última versión.",

    "Do you wish to unmount all the connected USB devices?",
    "The USB device can now be safely removed.",

    "El nombre no puede estar vacío."
};

// Simplified Chinese ("Chinese")
static const char *strings_sc[] {
    "确定",
    "取消",

    "选项",
    "选择全部",
    "清除全部",
    "属性",
    "重命名",
    "新建文件夹",
    "新建文件",
    "复制",
    "移动",
    "粘贴",
    "删除",
    "设置存档位",
    "输入名字",
    "输入文件夹名",
    "输入文件名",
    "复制: ",

    "文件名: ",
    "大小: ",
    "创建日期: ",
    "最后修改: ",
    "最后访问: ",
    "宽度: ",
    "高度: ",

    "本操作不可逆.",
    "确定删除下列文件吗:",
    "确定删除吗 ",

    "提取归档",
    "本功能需要花费一点时间.",
    "确定提取吗 ",
    "提取中:",

    "设置",
    "排序方式",
    "语言",
    "USB",
    "Unmount USB devices",
    "图片查看器",
    "开发人员选项",
    "Multiple Character Set (Improves boot speed when disabled)",
    "关于",
    "检查更新",
    " 显示文件名",
    " 打开日志",
    " Enable support for special symbols/characters",
    "版本",
    "作者",
    "横幅",

    "更新",
    "连接网络失败.",
    "有新版本的更新可用.",
    "您希望下载并安装NX-Shell版本吗 ",
    "更新成功.",
    "请退出并重新运行应用程序.",
    "你使用的是最新版本.",

    "Do you wish to unmount all the connected USB devices?",
    "The USB device can now be safely removed.",

    "名称不能为空."
};

// TODO: Korean
static const char *strings_ko[] {
    "OK",
    "Cancel",

    "Options",
    "Select All",
    "Clear All",
    "Properties",
    "Rename",
    "New Folder",
    "New File",
    "Copy",
    "Move",
    "Paste",
    "Delete",
    "Set Archive Bit",
    "Enter name",
    "Enter folder name",
    "Enter file name",
    "Copying:",

    "Name: ",
    "Size: ",
    "Created: ",
    "Modified: ",
    "Accessed: ",
    "Width: ",
    "Height: ",

    "This action cannot be undone.",
    "Do you wish to delete the following:",
    "Do you wish to delete ",

    "Extract archive",
    "This action may take a while.",
    "Do you wish to extract ",
    "Extracting:",

    "Settings",
    "Sort Settings",
    "Language",
    "USB",
    "Unmount USB devices",
    "Image Viewer",
    "Developer Options",
    "Multiple Character Set (Improves boot speed when disabled)",
    "About",
    "Check for Updates",
    " Display filename",
    " Enable logs",
    " Enable support for special symbols/characters",
    "version",
    "Author",
    "Banner",

    "Update",
    "Could not connect to network.",
    "An update is available.",
    "Do you wish to download and install NX-Shell version ",
    "Update was successful.",
    "Please exit and rerun the application.",
    "You are on the latest version.",

    "Do you wish to unmount all the connected USB devices?",
    "The USB device can now be safely removed.",

    "The name cannot be empty."
};

// TODO: Dutch
static const char *strings_nl[] {
    "OK",
    "Cancel",

    "Options",
    "Select All",
    "Clear All",
    "Properties",
    "Rename",
    "New Folder",
    "New File",
    "Copy",
    "Move",
    "Paste",
    "Delete",
    "Set Archive Bit",
    "Enter name",
    "Enter folder name",
    "Enter file name",
    "Copying:",

    "Name: ",
    "Size: ",
    "Created: ",
    "Modified: ",
    "Accessed: ",
    "Width: ",
    "Height: ",

    "This action cannot be undone.",
    "Do you wish to delete the following:",
    "Do you wish to delete ",

    "Extract archive",
    "This action may take a while.",
    "Do you wish to extract ",
    "Extracting:",

    "Settings",
    "Sort Settings",
    "Language",
    "USB",
    "Unmount USB devices",
    "Image Viewer",
    "Developer Options",
    "Multiple Character Set (Improves boot speed when disabled)",
    "About",
    "Check for Updates",
    " Display filename",
    " Enable logs",
    " Enable support for special symbols/characters",
    "version",
    "Author",
    "Banner",

    "Update",
    "Could not connect to network.",
    "An update is available.",
    "Do you wish to download and install NX-Shell version ",
    "Update was successful.",
    "Please exit and rerun the application.",
    "You are on the latest version.",

    "Do you wish to unmount all the connected USB devices?",
    "The USB device can now be safely removed.",

    "The name cannot be empty."
};

// TODO: Portuguese
static const char *strings_pt[] {
    "OK",
    "Cancel",

    "Options",
    "Select All",
    "Clear All",
    "Properties",
    "Rename",
    "New Folder",
    "New File",
    "Copy",
    "Move",
    "Paste",
    "Delete",
    "Set Archive Bit",
    "Enter name",
    "Enter folder name",
    "Enter file name",
    "Copying:",

    "Name: ",
    "Size: ",
    "Created: ",
    "Modified: ",
    "Accessed: ",
    "Width: ",
    "Height: ",

    "This action cannot be undone.",
    "Do you wish to delete the following:",
    "Do you wish to delete ",

    "Extract archive",
    "This action may take a while.",
    "Do you wish to extract ",
    "Extracting:",

    "Settings",
    "Sort Settings",
    "Language",
    "USB",
    "Unmount USB devices",
    "Image Viewer",
    "Developer Options",
    "Multiple Character Set (Improves boot speed when disabled)",
    "About",
    "Check for Updates",
    " Display filename",
    " Enable logs",
    " Enable support for special symbols/characters",
    "version",
    "Author",
    "Banner",

    "Update",
    "Could not connect to network.",
    "An update is available.",
    "Do you wish to download and install NX-Shell version ",
    "Update was successful.",
    "Please exit and rerun the application.",
    "You are on the latest version.",

    "Do you wish to unmount all the connected USB devices?",
    "The USB device can now be safely removed.",

    "The name cannot be empty."
};

// TODO: Russian
static const char *strings_ru[] {
    "OK",
    "Cancel",

    "Options",
    "Select All",
    "Clear All",
    "Properties",
    "Rename",
    "New Folder",
    "New File",
    "Copy",
    "Move",
    "Paste",
    "Delete",
    "Set Archive Bit",
    "Enter name",
    "Enter folder name",
    "Enter file name",
    "Copying:",

    "Name: ",
    "Size: ",
    "Created: ",
    "Modified: ",
    "Accessed: ",
    "Width: ",
    "Height: ",

    "This action cannot be undone.",
    "Do you wish to delete the following:",
    "Do you wish to delete ",

    "Extract archive",
    "This action may take a while.",
    "Do you wish to extract ",
    "Extracting:",

    "Settings",
    "Sort Settings",
    "Language",
    "USB",
    "Unmount USB devices",
    "Image Viewer",
    "Developer Options",
    "Multiple Character Set (Improves boot speed when disabled)",
    "About",
    "Check for Updates",
    " Display filename",
    " Enable logs",
    " Enable support for special symbols/characters",
    "version",
    "Author",
    "Banner",

    "Update",
    "Could not connect to network.",
    "An update is available.",
    "Do you wish to download and install NX-Shell version ",
    "Update was successful.",
    "Please exit and rerun the application.",
    "You are on the latest version.",

    "Do you wish to unmount all the connected USB devices?",
    "The USB device can now be safely removed.",

    "The name cannot be empty."
};

// Traditional Chinese ("Taiwanese")
static const char *strings_tw[] {
    "確定",
    "取消",

    "選項",
    "選擇全部",
    "清除全部",
    "屬性",
    "重命名",
    "新建文件夾",
    "新建文件",
    "復制",
    "移動",
    "粘貼",
    "刪除",
    "設置存檔位",
    "輸入名字",
    "輸入文件夾名",
    "輸入文件名",
    "復制:",

    "文件名: ",
    "大小: ",
    "創建日期: ",
    "最後修改: ",
    "最後訪問: ",
    "寬度: ",
    "高度: ",

    "本操作不可逆.",
    "確定刪除下列文件嗎:",
    "確定刪除嗎 ",

    "提取歸檔",
    "本功能需要花費壹點時間.",
    "確定提取嗎 ",
    "提取中:",

    "設置",
    "排序方式",
    "語言",
    "USB",
    "Unmount USB devices",
    "圖片查看器",
    "開發人員選項",
    "Multiple Character Set (Improves boot speed when disabled)",
    "關於",
    "檢查更新",
    " 顯示文件名",
    " 打開日誌",
    " Enable support for special symbols/characters",
    "版本",
    "作者",
    "橫幅",

    "更新",
    "連接網絡失敗.",
    "有新版本的更新可用.",
    "您希望下載並安裝NX-Shell版本嗎 ",
    "更新成功.",
    "請退出並重新運行應用程序.",
    "妳使用的是最新版本.",

    "Do you wish to unmount all the connected USB devices?",
    "The USB device can now be safely removed.",

    "名稱不能為空."
};

const char **strings[Lang::Max] = {
    strings_jp,
    strings_en,
    strings_fr,
    strings_de,
    strings_it,
    strings_es,
    strings_sc,
    strings_ko,
    strings_nl,
    strings_pt,
    strings_ru,
    strings_tw
};
