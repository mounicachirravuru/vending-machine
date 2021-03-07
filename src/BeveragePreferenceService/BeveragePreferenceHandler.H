#ifndef VENDING_MACHINE_MICROSERVICES_BeveragePreferenceHANDLER_H
#define VENDING_MACHINE_MICROSERVICES_BeveragePreferenceHANDLER_H

#include <iostream>
#include <string>
#include <regex>
#include <future>

#include "../../gen-cpp/BeveragePreferenceService.h"
//#include "../../gen-cpp/WeatherService.h"

#include "../ClientPool.h"
#include "../ThriftClient.h"
#include "../logger.h"

namespace vending_machine{

class BeveragePreferenceServiceHandler : public BeveragePreferenceServiceIf {
 public:
    BeveragePreferenceServiceHandler()
		  //ClientPool<ThriftClient<WeatherServiceClient>> *) ;
  ~BeveragePreferenceServiceHandler() override=default;

  void getBeverage(std::string& _return,const BeverageType::type btype) override;
};
  
 //private:
 // ClientPool<ThriftClient<BeveragePreferenceServiceClient>> *_BeveragePreference_client_pool;


// Constructor
 BeveragePreferenceServiceHandler::BeveragePreferenceServiceHandler() {
		//ClientPool<ThriftClient<BeveragePreferenceServiceClient>> *BeveragePreference_client_pool) {

     // Storing the clientpool
    // _BeveragePreference_client_pool = BeveragePreference_client_pool;
}

// Remote Procedure "PlaceOrder"
void BeveragePreferenceServiceHandler::getBeverage(std::string& _return,BeverageType::type btype){
     // Your implementation goes here
     printf("BeveragePreference\n");

     //return BeverageType::type::COLD;


    // by default get cold
    // BeverageType::type beverageType = BeverageType::type::HOT;

    
    
   // 3. business logic
   if(btype == BeverageType::type::HOT)


        
               std::string preference = rand()[“cappuccino”,  “latte”,  “espresso”];
                     
               std::cout<<" The Beverage Preference is = "<< preference << std::endl;
                   
                   _return preference;

        // cout << " The Beverage Preference is  " << rand()[“cappuccino”,  “latte”,  “espresso”];
           

	//_return = "Cold beverage";//BeverageType::type::COLD;

   else

	   std::string yourChoice = rand()[“lemonade”, “ice tea”,  “soda” ];
               
              std::cout<<" Your Beverage Preference is = " << yourChoice << std::endl;
               
              _return yourChoice;
}
//#endif


 // namespace vending_machine


#endif //VENDING_MACHINE_MICROSERVICES_BEVERAGEPREFERENCEHANDLER_H

