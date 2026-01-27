#ifndef _com_sun_org_apache_bcel_internal_generic_ArrayElementValueGen_h_
#define _com_sun_org_apache_bcel_internal_generic_ArrayElementValueGen_h_
//$ class com.sun.org.apache.bcel.internal.generic.ArrayElementValueGen
//$ extends com.sun.org.apache.bcel.internal.generic.ElementValueGen

#include <com/sun/org/apache/bcel/internal/generic/ElementValueGen.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class ArrayElementValue;
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
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class ArrayElementValueGen : public ::com::sun::org::apache::bcel::internal::generic::ElementValueGen {
	$class(ArrayElementValueGen, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ElementValueGen)
public:
	ArrayElementValueGen();
	void init$(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	void init$(int32_t type, $Array<::com::sun::org::apache::bcel::internal::classfile::ElementValue>* datums, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool);
	void init$(::com::sun::org::apache::bcel::internal::classfile::ArrayElementValue* value, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool, bool copyPoolEntries);
	virtual void addElement(::com::sun::org::apache::bcel::internal::generic::ElementValueGen* gen);
	virtual void dump(::java::io::DataOutputStream* dos) override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::ElementValue* getElementValue() override;
	virtual ::java::util::List* getElementValues();
	virtual int32_t getElementValuesSize();
	virtual $String* stringifyValue() override;
	::java::util::List* evalues = nullptr;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_ArrayElementValueGen_h_