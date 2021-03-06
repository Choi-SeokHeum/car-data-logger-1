/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.someip 3.1.10.v201610310807.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COM_IVIS_AVINFORMATIONPROVIDER_AV_INFORMATION_SOMEIP_PROXY_HPP_
#define V1_COM_IVIS_AVINFORMATIONPROVIDER_AV_INFORMATION_SOMEIP_PROXY_HPP_

#include <v1/com/ivis/AVInformationProvider/AVInformationProxyBase.hpp>
#include <v1/com/ivis/AVInformationProvider/AVInformationTypesSomeIPDeployment.hpp>
#include <v1/com/ivis/AVInformationProvider/AVInformationSomeIPDeployment.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Proxy.hpp>
#include <CommonAPI/SomeIP/Types.hpp>
#include <CommonAPI/SomeIP/Attribute.hpp>
#include <CommonAPI/SomeIP/Event.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

#  if _MSC_VER >= 1300
/*
 * Diamond inheritance is used for the CommonAPI::Proxy base class.
 * The Microsoft compiler put warning (C4250) using a desired c++ feature: "Delegating to a sister class"
 * A powerful technique that arises from using virtual inheritance is to delegate a method from a class in another class
 * by using a common abstract base class. This is also called cross delegation.
 */
#    pragma warning( disable : 4250 )
#  endif

#  if _MSC_VER >= 1300
/*
 * Diamond inheritance is used for the CommonAPI::Proxy base class.
 * The Microsoft compiler put warning (C4250) using a desired c++ feature: "Delegating to a sister class"
 * A powerful technique that arises from using virtual inheritance is to delegate a method from a class in another class
 * by using a common abstract base class. This is also called cross delegation.
 */
#    pragma warning( disable : 4250 )
#  endif

namespace v1 {
namespace com {
namespace ivis {
namespace AVInformationProvider {

class AVInformationSomeIPProxy
    : virtual public AVInformationProxyBase,
    virtual public CommonAPI::SomeIP::Proxy {
public:
    AVInformationSomeIPProxy(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection);

    virtual ~AVInformationSomeIPProxy() { }

    virtual CurrentSourceAttribute& getCurrentSourceAttribute();
    virtual MetaDataAttribute& getMetaDataAttribute();
    virtual PlayPositionAttribute& getPlayPositionAttribute();
    virtual PlayStatusAttribute& getPlayStatusAttribute();

    virtual NotifyAlbumArtEvent& getNotifyAlbumArtEvent();

    virtual void requestAction(const AVInformationTypes::Action &_action, CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> requestActionAsync(const AVInformationTypes::Action &_action, RequestActionAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t &_major, uint16_t &_minor) const;

private:

    class SomeIPcurrentSource_Attribute : public CommonAPI::SomeIP::ObservableAttribute<CommonAPI::SomeIP::Attribute<CurrentSourceAttribute, ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::SourceDeployment_t>> {
    public:
        template <typename... _A>
            SomeIPcurrentSource_Attribute(AVInformationSomeIPProxy &_proxy,
                _A ... arguments) : CommonAPI::SomeIP::ObservableAttribute<CommonAPI::SomeIP::Attribute<CurrentSourceAttribute, ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::SourceDeployment_t>>(
                                        _proxy, arguments...) {}
                void setValue(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source& requestValue,
                              CommonAPI::CallStatus& callStatus,
                              ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source& responseValue,
                              const CommonAPI::CallInfo *_info = nullptr) {
                    // validate input parameters
                    if (!requestValue.validate()) {
                        callStatus = CommonAPI::CallStatus::INVALID_VALUE;
                        return;
                    }
                    // call base function if ok
                    CommonAPI::SomeIP::ObservableAttribute<CommonAPI::SomeIP::Attribute<CurrentSourceAttribute, ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::SourceDeployment_t>>::setValue(requestValue, callStatus, responseValue, _info);
                }
                std::future<CommonAPI::CallStatus> setValueAsync(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source& requestValue,
                                                                 std::function<void(const CommonAPI::CallStatus &, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source)> _callback,
                                                                 const CommonAPI::CallInfo *_info) {
                    // validate input parameters
                    if (!requestValue.validate()) {
                        ::v1::com::ivis::AVInformationProvider::AVInformationTypes::Source _returnvalue;
                        _callback(CommonAPI::CallStatus::INVALID_VALUE, _returnvalue);
                        std::promise<CommonAPI::CallStatus> promise;
                        promise.set_value(CommonAPI::CallStatus::INVALID_VALUE);
                        return promise.get_future();
                    }
                    // call base function if ok
                    return CommonAPI::SomeIP::ObservableAttribute<CommonAPI::SomeIP::Attribute<CurrentSourceAttribute, ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::SourceDeployment_t>>::setValueAsync(requestValue, _callback, _info);
                }
    };

    SomeIPcurrentSource_Attribute currentSource_;

    CommonAPI::SomeIP::ObservableAttribute<CommonAPI::SomeIP::Attribute<MetaDataAttribute, ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::MetaDataDeployment_t>> metaData_;
    CommonAPI::SomeIP::ObservableAttribute<CommonAPI::SomeIP::Attribute<PlayPositionAttribute, ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::PlayPositionDeployment_t>> playPosition_;
    class SomeIPplayStatus_Attribute : public CommonAPI::SomeIP::ObservableAttribute<CommonAPI::SomeIP::Attribute<PlayStatusAttribute, ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::PlayStatusDeployment_t>> {
    public:
        template <typename... _A>
            SomeIPplayStatus_Attribute(AVInformationSomeIPProxy &_proxy,
                _A ... arguments) : CommonAPI::SomeIP::ObservableAttribute<CommonAPI::SomeIP::Attribute<PlayStatusAttribute, ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::PlayStatusDeployment_t>>(
                                        _proxy, arguments...) {}
                void setValue(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus& requestValue,
                              CommonAPI::CallStatus& callStatus,
                              ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus& responseValue,
                              const CommonAPI::CallInfo *_info = nullptr) {
                    // validate input parameters
                    if (!requestValue.validate()) {
                        callStatus = CommonAPI::CallStatus::INVALID_VALUE;
                        return;
                    }
                    // call base function if ok
                    CommonAPI::SomeIP::ObservableAttribute<CommonAPI::SomeIP::Attribute<PlayStatusAttribute, ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::PlayStatusDeployment_t>>::setValue(requestValue, callStatus, responseValue, _info);
                }
                std::future<CommonAPI::CallStatus> setValueAsync(const ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus& requestValue,
                                                                 std::function<void(const CommonAPI::CallStatus &, ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus)> _callback,
                                                                 const CommonAPI::CallInfo *_info) {
                    // validate input parameters
                    if (!requestValue.validate()) {
                        ::v1::com::ivis::AVInformationProvider::AVInformationTypes::PlayStatus _returnvalue;
                        _callback(CommonAPI::CallStatus::INVALID_VALUE, _returnvalue);
                        std::promise<CommonAPI::CallStatus> promise;
                        promise.set_value(CommonAPI::CallStatus::INVALID_VALUE);
                        return promise.get_future();
                    }
                    // call base function if ok
                    return CommonAPI::SomeIP::ObservableAttribute<CommonAPI::SomeIP::Attribute<PlayStatusAttribute, ::v1::com::ivis::AVInformationProvider::AVInformationTypes_::PlayStatusDeployment_t>>::setValueAsync(requestValue, _callback, _info);
                }
    };

    SomeIPplayStatus_Attribute playStatus_;


     CommonAPI::SomeIP::Event<NotifyAlbumArtEvent, CommonAPI::Deployable< uint32_t, CommonAPI::SomeIP::IntegerDeployment<uint32_t> >, CommonAPI::Deployable< uint32_t, CommonAPI::SomeIP::IntegerDeployment<uint32_t> >, CommonAPI::Deployable< std::vector< uint8_t >, CommonAPI::SomeIP::ArrayDeployment< CommonAPI::SomeIP::IntegerDeployment<uint8_t> > >> notifyAlbumArt_;

};

} // namespace AVInformationProvider
} // namespace ivis
} // namespace com
} // namespace v1

#endif // V1_COM_IVIS_AVINFORMATIONPROVIDER_AV_Information_SOMEIP_PROXY_HPP_
