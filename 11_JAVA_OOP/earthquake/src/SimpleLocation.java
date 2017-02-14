/**
 * Created by major on 13.02.17.
 */
public class SimpleLocation {
    public double latitude;
    public double longitude;

    // overloading constructors
    public SimpleLocation(){
        this.latitude = 32.7;
        this.longitude = -117.2;
    }

    public SimpleLocation(double lat, double lon) {
        this.latitude = lat;
        this.longitude = lon;
    }

    // overloading methods
    public double distance(SimpleLocation other){
        // some stuff
        return 33.2;
    }

    public double distance(double lat, double lon){
        // calculating distance ...
        return 665.0;
    }
}
