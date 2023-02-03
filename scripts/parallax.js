let polygons = document.getElementById("polygons");

window.addEventListener("scroll", () => {
    scrollValue = window.scrollY;
    polygons.style.left = scrollValue * -0.3 + "px";
});