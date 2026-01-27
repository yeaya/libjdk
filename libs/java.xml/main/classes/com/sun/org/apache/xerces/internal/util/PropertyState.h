#ifndef _com_sun_org_apache_xerces_internal_util_PropertyState_h_
#define _com_sun_org_apache_xerces_internal_util_PropertyState_h_
//$ class com.sun.org.apache.xerces.internal.util.PropertyState
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

class PropertyState : public ::java::lang::Object {
	$class(PropertyState, 0, ::java::lang::Object)
public:
	PropertyState();
	void init$(::com::sun::org::apache::xerces::internal::util::Status* status, Object$* state);
	static ::com::sun::org::apache::xerces::internal::util::PropertyState* is(Object$* value);
	virtual bool isExceptional();
	static ::com::sun::org::apache::xerces::internal::util::PropertyState* of(::com::sun::org::apache::xerces::internal::util::Status* status);
	::com::sun::org::apache::xerces::internal::util::Status* status = nullptr;
	$Object* state = nullptr;
	static ::com::sun::org::apache::xerces::internal::util::PropertyState* UNKNOWN;
	static ::com::sun::org::apache::xerces::internal::util::PropertyState* RECOGNIZED;
	static ::com::sun::org::apache::xerces::internal::util::PropertyState* NOT_SUPPORTED;
	static ::com::sun::org::apache::xerces::internal::util::PropertyState* NOT_RECOGNIZED;
	static ::com::sun::org::apache::xerces::internal::util::PropertyState* NOT_ALLOWED;
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
#pragma pop_macro("UNKNOWN")

#endif // _com_sun_org_apache_xerces_internal_util_PropertyState_h_