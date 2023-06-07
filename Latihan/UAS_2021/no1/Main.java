package Latihan.UAS_2021.no1;


public class Main {
    public static void main(String[] args) {
        // toolbar
        Panel toolbar = new Panel("toolbar");
        toolbar.add(new Picture("arrow button"));
        toolbar.add(new Picture("settings button"));
        toolbar.add(new Text("search bar"));
        
        // elements
        Panel desktop = new Panel("desktop label");
        desktop.add(new Picture("desktop picture"));
        desktop.add(new Text("Desktop"));

        Panel movies = new Panel("movies label");
        movies.add(new Picture("movies picutre"));
        movies.add(new Text("movies"));
        
        // sidebar
        Panel sidebar = new Panel("sidebar");
        sidebar.add(desktop);
        sidebar.add(movies);

        // main panel
        Panel panel = new Panel("main Panel");
        panel.add(desktop);
        panel.add(movies);

        // statusbar
        Panel statusbar = new Panel("statusbar");
        statusbar.add(new Text("9 items, 1.1 GB available"));

        // window
        Window window = new Window("main window");
        window.add(panel);
        window.add(toolbar);
        window.add(sidebar);
        window.add(statusbar);

        // app
        // App app = new App(window);
    }
}
