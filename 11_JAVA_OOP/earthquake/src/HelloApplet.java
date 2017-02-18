/**
 * Created by major on 17.02.17.
 */

import processing.core.*;

public class HelloApplet extends PApplet {

    private String URL = "http://inozmi.net/wp-content/uploads/2014/07/plyazhi-californii.jpg";
    private PImage backgroundImage;

    public void settings(){
        size(400, 400);
    }

    public static void main(String[] args){
        PApplet.main("HelloApplet", args);
    }

    public void setup(){

        backgroundImage  = loadImage(URL);

    }

    public void draw(){
        backgroundImage.resize(0, height);
        image(backgroundImage, 0, 0);
        fill(255, 209,0);
        ellipse(width/5*4, height/5, width/5, height/5);
    }
}
