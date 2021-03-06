/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.10.v201611111521.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_VEHICLEDATAMANAGER_Vehicle_Data_Manager_PROXY_HPP_
#define V1_COM_IVIS_VEHICLEDATAMANAGER_Vehicle_Data_Manager_PROXY_HPP_

#include <v1/com/ivis/VehicleDataManager/VehicleDataManagerProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/AttributeExtension.hpp>
#include <CommonAPI/Factory.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace com {
namespace ivis {
namespace VehicleDataManager {

template <typename ... _AttributeExtensions>
class VehicleDataManagerProxy
    : virtual public VehicleDataManager,
      virtual public VehicleDataManagerProxyBase,
      virtual public _AttributeExtensions... {
public:
    VehicleDataManagerProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~VehicleDataManagerProxy();

    typedef VehicleDataManager InterfaceType;


    /**
     * description: This attribute contains the current speed of this vehicle. The unit of value is
     *   km/h or mph.
     */
    /**
     * Returns the wrapper class that provides access to the attribute vehicleSpeed.
     */
    virtual VehicleSpeedAttribute& getVehicleSpeedAttribute() {
        return delegate_->getVehicleSpeedAttribute();
    }
    /**
     * description: This attribute contains the VIN(Vehicle Identification Number as defined by ISO
     *   3779) information for this vehicle. It's 17 bytes long characters.
     */
    /**
     * Returns the wrapper class that provides access to the attribute vin.
     */
    virtual VinAttribute& getVinAttribute() {
        return delegate_->getVinAttribute();
    }
    /**
     * description: This attribute contains the current status of transmission gear.
     */
    /**
     * Returns the wrapper class that provides access to the attribute transmissionGearStatus.
     */
    virtual TransmissionGearStatusAttribute& getTransmissionGearStatusAttribute() {
        return delegate_->getTransmissionGearStatusAttribute();
    }
    /**
     * Returns the wrapper class that provides access to the attribute drivingRestriction.
     */
    virtual DrivingRestrictionAttribute& getDrivingRestrictionAttribute() {
        return delegate_->getDrivingRestrictionAttribute();
    }
    /**
     * Returns the wrapper class that provides access to the attribute lowFuelWarning.
     */
    virtual LowFuelWarningAttribute& getLowFuelWarningAttribute() {
        return delegate_->getLowFuelWarningAttribute();
    }




    /**
     * Returns the CommonAPI address of the remote partner this proxy communicates with.
     */
    virtual const CommonAPI::Address &getAddress() const;

    /**
     * Returns true if the remote partner for this proxy is currently known to be available.
     */
    virtual bool isAvailable() const;

    /**
     * Returns true if the remote partner for this proxy is available.
     */
    virtual bool isAvailableBlocking() const;

    /**
     * Returns the wrapper class that is used to (de-)register for notifications about
     * the availability of the remote partner of this proxy.
     */
    virtual CommonAPI::ProxyStatusEvent& getProxyStatusEvent();

    /**
     * Returns the wrapper class that is used to access version information of the remote
     * partner of this proxy.
     */
    virtual CommonAPI::InterfaceVersionAttribute& getInterfaceVersionAttribute();

 private:
    std::shared_ptr< VehicleDataManagerProxyBase> delegate_;
};

typedef VehicleDataManagerProxy<> VehicleDataManagerProxyDefault;

namespace VehicleDataManagerExtensions {
    /**
     * description: This attribute contains the current speed of this vehicle. The unit of value is
     *   km/h or mph.
     */
    template <template <typename > class _ExtensionType>
    class VehicleSpeedAttributeExtension {
     public:
        typedef _ExtensionType< VehicleDataManagerProxyBase::VehicleSpeedAttribute> extension_type;
    
        static_assert(std::is_base_of<typename CommonAPI::AttributeExtension< VehicleDataManagerProxyBase::VehicleSpeedAttribute>, extension_type>::value,
                      "Not CommonAPI Attribute Extension!");
    
        VehicleSpeedAttributeExtension(VehicleDataManagerProxyBase& proxy): attributeExtension_(proxy.getVehicleSpeedAttribute()) {
        }
    
        inline extension_type& getVehicleSpeedAttributeExtension() {
            return attributeExtension_;
        }
    
     private:
        extension_type attributeExtension_;
    };

    /**
     * description: This attribute contains the VIN(Vehicle Identification Number as defined by ISO
     *   3779) information for this vehicle. It's 17 bytes long characters.
     */
    template <template <typename > class _ExtensionType>
    class VinAttributeExtension {
     public:
        typedef _ExtensionType< VehicleDataManagerProxyBase::VinAttribute> extension_type;
    
        static_assert(std::is_base_of<typename CommonAPI::AttributeExtension< VehicleDataManagerProxyBase::VinAttribute>, extension_type>::value,
                      "Not CommonAPI Attribute Extension!");
    
        VinAttributeExtension(VehicleDataManagerProxyBase& proxy): attributeExtension_(proxy.getVinAttribute()) {
        }
    
        inline extension_type& getVinAttributeExtension() {
            return attributeExtension_;
        }
    
     private:
        extension_type attributeExtension_;
    };

    /**
     * description: This attribute contains the current status of transmission gear.
     */
    template <template <typename > class _ExtensionType>
    class TransmissionGearStatusAttributeExtension {
     public:
        typedef _ExtensionType< VehicleDataManagerProxyBase::TransmissionGearStatusAttribute> extension_type;
    
        static_assert(std::is_base_of<typename CommonAPI::AttributeExtension< VehicleDataManagerProxyBase::TransmissionGearStatusAttribute>, extension_type>::value,
                      "Not CommonAPI Attribute Extension!");
    
        TransmissionGearStatusAttributeExtension(VehicleDataManagerProxyBase& proxy): attributeExtension_(proxy.getTransmissionGearStatusAttribute()) {
        }
    
        inline extension_type& getTransmissionGearStatusAttributeExtension() {
            return attributeExtension_;
        }
    
     private:
        extension_type attributeExtension_;
    };

    template <template <typename > class _ExtensionType>
    class DrivingRestrictionAttributeExtension {
     public:
        typedef _ExtensionType< VehicleDataManagerProxyBase::DrivingRestrictionAttribute> extension_type;
    
        static_assert(std::is_base_of<typename CommonAPI::AttributeExtension< VehicleDataManagerProxyBase::DrivingRestrictionAttribute>, extension_type>::value,
                      "Not CommonAPI Attribute Extension!");
    
        DrivingRestrictionAttributeExtension(VehicleDataManagerProxyBase& proxy): attributeExtension_(proxy.getDrivingRestrictionAttribute()) {
        }
    
        inline extension_type& getDrivingRestrictionAttributeExtension() {
            return attributeExtension_;
        }
    
     private:
        extension_type attributeExtension_;
    };

    template <template <typename > class _ExtensionType>
    class LowFuelWarningAttributeExtension {
     public:
        typedef _ExtensionType< VehicleDataManagerProxyBase::LowFuelWarningAttribute> extension_type;
    
        static_assert(std::is_base_of<typename CommonAPI::AttributeExtension< VehicleDataManagerProxyBase::LowFuelWarningAttribute>, extension_type>::value,
                      "Not CommonAPI Attribute Extension!");
    
        LowFuelWarningAttributeExtension(VehicleDataManagerProxyBase& proxy): attributeExtension_(proxy.getLowFuelWarningAttribute()) {
        }
    
        inline extension_type& getLowFuelWarningAttributeExtension() {
            return attributeExtension_;
        }
    
     private:
        extension_type attributeExtension_;
    };

} // namespace VehicleDataManagerExtensions

//
// VehicleDataManagerProxy Implementation
//
template <typename ... _AttributeExtensions>
VehicleDataManagerProxy<_AttributeExtensions...>::VehicleDataManagerProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast< VehicleDataManagerProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast< VehicleDataManagerProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
VehicleDataManagerProxy<_AttributeExtensions...>::~VehicleDataManagerProxy() {
}


template <typename ... _AttributeExtensions>
const CommonAPI::Address &VehicleDataManagerProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool VehicleDataManagerProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool VehicleDataManagerProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& VehicleDataManagerProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& VehicleDataManagerProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


} // namespace VehicleDataManager
} // namespace ivis
} // namespace com
} // namespace v1

namespace CommonAPI {
template<template<typename > class _AttributeExtension>
struct DefaultAttributeProxyHelper< ::v1::com::ivis::VehicleDataManager::VehicleDataManagerProxy,
    _AttributeExtension> {
    typedef typename ::v1::com::ivis::VehicleDataManager::VehicleDataManagerProxy<
            ::v1::com::ivis::VehicleDataManager::VehicleDataManagerExtensions::VehicleSpeedAttributeExtension<_AttributeExtension>, 
            ::v1::com::ivis::VehicleDataManager::VehicleDataManagerExtensions::VinAttributeExtension<_AttributeExtension>, 
            ::v1::com::ivis::VehicleDataManager::VehicleDataManagerExtensions::TransmissionGearStatusAttributeExtension<_AttributeExtension>, 
            ::v1::com::ivis::VehicleDataManager::VehicleDataManagerExtensions::DrivingRestrictionAttributeExtension<_AttributeExtension>, 
            ::v1::com::ivis::VehicleDataManager::VehicleDataManagerExtensions::LowFuelWarningAttributeExtension<_AttributeExtension>
    > class_t;
};
}


// Compatibility
namespace v1_1 = v1;

#endif // V1_COM_IVIS_VEHICLEDATAMANAGER_Vehicle_Data_Manager_PROXY_HPP_
