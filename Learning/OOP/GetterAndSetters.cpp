#include<iostream>
using namespace std;

class Stove
{
    private:
        int temperature = 0; //encapsultion

    public:
        int getTemperature() //getter
        {
            return temperature;
        }
        void setTemperature(int temperature) //setter
        {
            if(temperature > 10){
                this->temperature = 10;
            }
            else if(temperature < 0){
                this->temperature = 0;    
            }
            else{
                this->temperature = temperature;
            }
        }
};

int main()
{

    Stove stove;

    //stove.temperature = 1000000;
    //cout << "Stove settings: " << stove.temperature << '\n'; error

    stove.setTemperature(100000);
    cout << "Stove setting: " << stove.getTemperature(); 

    return 0;
}

/*
 *
 * In-notes
 * --------
 * 
 * Encapsulation: Encapsulation is the practice of bundling data and methods within a class,
 * and restricting direct access to some of the object's components to protect the data.
 * 
 * Getter: Makes a private attribute READABLE.
 * Setter: Makes a private attribute WRITABLE.
 * 
 * The stove settings can be only accessed with getters and setters.
 * 
 * Also, you can use constructor directly to set temprature.
 * Here is a example:
 * 
 * ****************************************************************************
 * 
 * Stove(int temperature){
 *      setTemperature(int temperature);
 *      //this->temeprature = temperature;
 * }
 * 
 * *****************************************************************************
 * 
 * Yes, you can directly use a constructor and use a setter in it as well.
 * While this may look uselss, it will be useful after inheritance.
 * And you can do additional checks too!
 * 
 * Next: "Inheritance"; Yoo, you've made a lot far good luck!
 * 
 */
