#ifndef _com_sun_org_apache_bcel_internal_generic_ClassElementValueGen_h_
#define _com_sun_org_apache_bcel_internal_generic_ClassElementValueGen_h_
//$ class com.sun.org.apache.bcel.internal.generic.ClassElementValueGen
//$ extends com.sun.org.apache.bcel.internal.generic.ElementValueGen

#include <com/sun/org/apache/bcel/internal/generic/ElementValueGen.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class ClassElementValue;
							class ElementValue;
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
							class ObjectType;
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

class ClassElementValueGen : public ::com::sun::org::apache::bcel::internal::generic::ElementValueGen {
	$class(ClassElementValueGen, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ElementValueGen)
public:
	ClassElementValueGen();
	void init$(int32_t typeIdx, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool);
	void init$(::com::sun::org::apache::bcel::internal::generic::ObjectType* t, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool);
	void init$(::com::sun::org::apache::bcel::internal::classfile::ClassElementValue* value, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool, bool copyPoolEntries);
	virtual void dump(::java::io::DataOutputStream* dos) override;
	virtual $String* getClassString();
	virtual ::com::sun::org::apache::bcel::internal::classfile::ElementValue* getElementValue() override;
	virtual int32_t getIndex();
	virtual $String* stringifyValue() override;
	int32_t idx = 0;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_ClassElementValueGen_h_