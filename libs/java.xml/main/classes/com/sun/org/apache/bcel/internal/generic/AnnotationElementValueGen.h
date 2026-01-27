#ifndef _com_sun_org_apache_bcel_internal_generic_AnnotationElementValueGen_h_
#define _com_sun_org_apache_bcel_internal_generic_AnnotationElementValueGen_h_
//$ class com.sun.org.apache.bcel.internal.generic.AnnotationElementValueGen
//$ extends com.sun.org.apache.bcel.internal.generic.ElementValueGen

#include <com/sun/org/apache/bcel/internal/generic/ElementValueGen.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class AnnotationElementValue;
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
							class AnnotationEntryGen;
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

class AnnotationElementValueGen : public ::com::sun::org::apache::bcel::internal::generic::ElementValueGen {
	$class(AnnotationElementValueGen, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::generic::ElementValueGen)
public:
	AnnotationElementValueGen();
	void init$(::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen* a, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool);
	void init$(int32_t type, ::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen* annotation, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool);
	void init$(::com::sun::org::apache::bcel::internal::classfile::AnnotationElementValue* value, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool, bool copyPoolEntries);
	virtual void dump(::java::io::DataOutputStream* dos) override;
	virtual ::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen* getAnnotation();
	virtual ::com::sun::org::apache::bcel::internal::classfile::ElementValue* getElementValue() override;
	virtual $String* stringifyValue() override;
	::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen* a = nullptr;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_AnnotationElementValueGen_h_