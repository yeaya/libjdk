#ifndef _com_sun_org_apache_bcel_internal_generic_AnnotationEntryGen_h_
#define _com_sun_org_apache_bcel_internal_generic_AnnotationEntryGen_h_
//$ class com.sun.org.apache.bcel.internal.generic.AnnotationEntryGen
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class AnnotationEntry;
							class Attribute;
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
							class ElementValuePairGen;
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
		class DataInput;
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

class AnnotationEntryGen : public ::java::lang::Object {
	$class(AnnotationEntryGen, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AnnotationEntryGen();
	void init$(::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry* a, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool, bool copyPoolEntries);
	void init$(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool);
	void init$(::com::sun::org::apache::bcel::internal::generic::ObjectType* type, ::java::util::List* elements, bool vis, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool);
	virtual void addElementNameValuePair(::com::sun::org::apache::bcel::internal::generic::ElementValuePairGen* evp);
	::java::util::List* copyValues($Array<::com::sun::org::apache::bcel::internal::classfile::ElementValuePair>* in, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool, bool copyPoolEntries);
	virtual void dump(::java::io::DataOutputStream* dos);
	virtual ::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry* getAnnotation();
	static $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* getAnnotationAttributes(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp, $Array<::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen>* annotationEntryGens);
	static $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* getParameterAnnotationAttributes(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp, $Array<::java::util::List>* vec);
	virtual int32_t getTypeIndex();
	$String* getTypeName();
	$String* getTypeSignature();
	virtual ::java::util::List* getValues();
	void isRuntimeVisible(bool b);
	virtual bool isRuntimeVisible();
	static ::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen* read(::java::io::DataInput* dis, ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool, bool b);
	virtual $String* toShortString();
	virtual $String* toString() override;
	int32_t typeIndex = 0;
	::java::util::List* evs = nullptr;
	::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cpool = nullptr;
	bool isRuntimeVisible$ = false;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_AnnotationEntryGen_h_