#ifndef _com_sun_org_apache_bcel_internal_generic_ElementValuePairGen_h_
#define _com_sun_org_apache_bcel_internal_generic_ElementValuePairGen_h_
//$ class com.sun.org.apache.bcel.internal.generic.ElementValuePairGen
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class ElementValuePair;
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
				namespace bcel {
					namespace internal {
						namespace generic {
							class ConstantPoolGen;
							class ElementValueGen;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class DataOutputStream;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class ElementValuePairGen : public ::java::lang::Object {
	$class(ElementValuePairGen, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ElementValuePairGen();
	void init$(::com::sun::org::apache::bcel::internal::classfile::ElementValuePair* nvp, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool, bool copyPoolEntries);
	void init$(int32_t idx, ::com::sun::org::apache::bcel::internal::generic::ElementValueGen* value, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool);
	void init$($String* name, ::com::sun::org::apache::bcel::internal::generic::ElementValueGen* value, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool);
	virtual void dump(::java::io::DataOutputStream* dos);
	virtual ::com::sun::org::apache::bcel::internal::classfile::ElementValuePair* getElementNameValuePair();
	virtual int32_t getNameIndex();
	$String* getNameString();
	::com::sun::org::apache::bcel::internal::generic::ElementValueGen* getValue();
	virtual $String* toString() override;
	int32_t nameIdx = 0;
	::com::sun::org::apache::bcel::internal::generic::ElementValueGen* value = nullptr;
	::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* constantPoolGen = nullptr;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_ElementValuePairGen_h_