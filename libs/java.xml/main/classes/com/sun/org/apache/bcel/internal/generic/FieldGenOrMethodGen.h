#ifndef _com_sun_org_apache_bcel_internal_generic_FieldGenOrMethodGen_h_
#define _com_sun_org_apache_bcel_internal_generic_FieldGenOrMethodGen_h_
//$ class com.sun.org.apache.bcel.internal.generic.FieldGenOrMethodGen
//$ extends com.sun.org.apache.bcel.internal.classfile.AccessFlags
//$ implements com.sun.org.apache.bcel.internal.generic.NamedAndTyped,java.lang.Cloneable

#include <com/sun/org/apache/bcel/internal/classfile/AccessFlags.h>
#include <com/sun/org/apache/bcel/internal/generic/NamedAndTyped.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class Attribute;
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
							class Type;
						}
					}
				}
			}
		}
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

class FieldGenOrMethodGen : public ::com::sun::org::apache::bcel::internal::classfile::AccessFlags, public ::com::sun::org::apache::bcel::internal::generic::NamedAndTyped, public ::java::lang::Cloneable {
	$class(FieldGenOrMethodGen, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::AccessFlags, ::com::sun::org::apache::bcel::internal::generic::NamedAndTyped, ::java::lang::Cloneable)
public:
	FieldGenOrMethodGen();
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t access_flags);
	virtual void addAnnotationEntry(::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen* ag);
	virtual void addAttribute(::com::sun::org::apache::bcel::internal::classfile::Attribute* a);
	virtual $Object* clone() override;
	virtual $Array<::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen>* getAnnotationEntries();
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* getAttributes();
	virtual ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* getConstantPool();
	virtual $String* getName() override;
	virtual $String* getSignature() {return nullptr;}
	virtual ::com::sun::org::apache::bcel::internal::generic::Type* getType() override;
	virtual void removeAnnotationEntries();
	virtual void removeAnnotationEntry(::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen* ag);
	virtual void removeAttribute(::com::sun::org::apache::bcel::internal::classfile::Attribute* a);
	virtual void removeAttributes();
	virtual void setConstantPool(::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp);
	virtual void setName($String* name) override;
	virtual void setType(::com::sun::org::apache::bcel::internal::generic::Type* type) override;
	virtual $String* toString() override;
	$String* name = nullptr;
	::com::sun::org::apache::bcel::internal::generic::Type* type = nullptr;
	::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen* cp = nullptr;
	::java::util::List* attributeList = nullptr;
	::java::util::List* annotationList = nullptr;
};

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_generic_FieldGenOrMethodGen_h_