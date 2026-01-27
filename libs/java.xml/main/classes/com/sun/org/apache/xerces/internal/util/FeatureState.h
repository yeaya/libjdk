#ifndef _com_sun_org_apache_xerces_internal_util_FeatureState_h_
#define _com_sun_org_apache_xerces_internal_util_FeatureState_h_
//$ class com.sun.org.apache.xerces.internal.util.FeatureState
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NOT_ALLOWED")
#undef NOT_ALLOWED
#pragma push_macro("NOT_RECOGNIZED")
#undef NOT_RECOGNIZED
#pragma push_macro("NOT_SUPPORTED")
#undef NOT_SUPPORTED
#pragma push_macro("RECOGNIZED")
#undef RECOGNIZED
#pragma push_macro("SET_DISABLED")
#undef SET_DISABLED
#pragma push_macro("SET_ENABLED")
#undef SET_ENABLED
#pragma push_macro("UNKNOWN")
#undef UNKNOWN

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class Status;
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class FeatureState : public ::java::lang::Object {
	$class(FeatureState, 0, ::java::lang::Object)
public:
	FeatureState();
	void init$(::com::sun::org::apache::xerces::internal::util::Status* status, bool state);
	static ::com::sun::org::apache::xerces::internal::util::FeatureState* is(bool value);
	virtual bool isExceptional();
	static ::com::sun::org::apache::xerces::internal::util::FeatureState* of(::com::sun::org::apache::xerces::internal::util::Status* status);
	::com::sun::org::apache::xerces::internal::util::Status* status = nullptr;
	bool state = false;
	static ::com::sun::org::apache::xerces::internal::util::FeatureState* SET_ENABLED;
	static ::com::sun::org::apache::xerces::internal::util::FeatureState* SET_DISABLED;
	static ::com::sun::org::apache::xerces::internal::util::FeatureState* UNKNOWN;
	static ::com::sun::org::apache::xerces::internal::util::FeatureState* RECOGNIZED;
	static ::com::sun::org::apache::xerces::internal::util::FeatureState* NOT_SUPPORTED;
	static ::com::sun::org::apache::xerces::internal::util::FeatureState* NOT_RECOGNIZED;
	static ::com::sun::org::apache::xerces::internal::util::FeatureState* NOT_ALLOWED;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("NOT_ALLOWED")
#pragma pop_macro("NOT_RECOGNIZED")
#pragma pop_macro("NOT_SUPPORTED")
#pragma pop_macro("RECOGNIZED")
#pragma pop_macro("SET_DISABLED")
#pragma pop_macro("SET_ENABLED")
#pragma pop_macro("UNKNOWN")

#endif // _com_sun_org_apache_xerces_internal_util_FeatureState_h_