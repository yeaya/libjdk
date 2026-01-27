#ifndef _com_sun_org_apache_xalan_internal_utils_FeaturePropertyBase_h_
#define _com_sun_org_apache_xalan_internal_utils_FeaturePropertyBase_h_
//$ class com.sun.org.apache.xalan.internal.utils.FeaturePropertyBase
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace utils {
							class FeaturePropertyBase$State;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Enum;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace utils {

class FeaturePropertyBase : public ::java::lang::Object {
	$class(FeaturePropertyBase, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FeaturePropertyBase();
	void init$();
	virtual int32_t getIndex($String* propertyName) {return 0;}
	virtual int32_t getIndex($Class* property, $String* propertyName);
	virtual void getSystemProperty(::java::lang::Enum* property, $String* systemProperty);
	virtual $String* getValue(::java::lang::Enum* property);
	virtual $String* getValue($String* property);
	virtual $String* getValueAsString($String* propertyName);
	virtual $String* getValueByIndex(int32_t index);
	virtual void setValue(::java::lang::Enum* property, ::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase$State* state, $String* value);
	virtual void setValue(int32_t index, ::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase$State* state, $String* value);
	virtual bool setValue($String* propertyName, ::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase$State* state, Object$* value);
	virtual bool setValue($String* propertyName, ::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase$State* state, bool value);
	$StringArray* values = nullptr;
	$Array<::com::sun::org::apache::xalan::internal::utils::FeaturePropertyBase$State>* states = nullptr;
};

						} // utils
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_utils_FeaturePropertyBase_h_