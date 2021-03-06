/**
* Swagger Petstore
* This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
*
* OpenAPI spec version: 1.0.0
* Contact: apiteam@swagger.io
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/
/*
 * Currency.h
 *
 * some description 
 */

#ifndef Currency_H_
#define Currency_H_


#include "ModelBase.h"


namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// some description 
/// </summary>
class  Currency
    : public ModelBase
{
public:
    Currency();
    virtual ~Currency();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// Currency members


protected:
};

}
}
}
}

#endif /* Currency_H_ */
