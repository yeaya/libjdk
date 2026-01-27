#ifndef _com_sun_org_apache_xerces_internal_util_Status_h_
#define _com_sun_org_apache_xerces_internal_util_Status_h_
//$ class com.sun.org.apache.xerces.internal.util.Status
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("NOT_ALLOWED")
#undef NOT_ALLOWED
#pragma push_macro("NOT_RECOGNIZED")
#undef NOT_RECOGNIZED
#pragma push_macro("NOT_SUPPORTED")
#undef NOT_SUPPORTED
#pragma push_macro("RECOGNIZED")
#undef RECOGNIZED
#pragma push_macro("SET")
#undef SET
#pragma push_macro("UNKNOWN")
#undef UNKNOWN

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class Status : public ::java::lang::Enum {
	$class(Status, 0, ::java::lang::Enum)
public:
	Status();
	static $Array<::com::sun::org::apache::xerces::internal::util::Status>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int16_t type, bool isExceptional);
	virtual int16_t getType();
	virtual bool isExceptional();
	static ::com::sun::org::apache::xerces::internal::util::Status* valueOf($String* name);
	static $Array<::com::sun::org::apache::xerces::internal::util::Status>* values();
	static ::com::sun::org::apache::xerces::internal::util::Status* SET;
	static ::com::sun::org::apache::xerces::internal::util::Status* UNKNOWN;
	static ::com::sun::org::apache::xerces::internal::util::Status* RECOGNIZED;
	static ::com::sun::org::apache::xerces::internal::util::Status* NOT_SUPPORTED;
	static ::com::sun::org::apache::xerces::internal::util::Status* NOT_RECOGNIZED;
	static ::com::sun::org::apache::xerces::internal::util::Status* NOT_ALLOWED;
	static $Array<::com::sun::org::apache::xerces::internal::util::Status>* $VALUES;
	int16_t type = 0;
	bool isExceptional$ = false;
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
#pragma pop_macro("SET")
#pragma pop_macro("UNKNOWN")

#endif // _com_sun_org_apache_xerces_internal_util_Status_h_