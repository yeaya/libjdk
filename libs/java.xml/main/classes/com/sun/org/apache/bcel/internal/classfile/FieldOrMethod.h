#ifndef _com_sun_org_apache_bcel_internal_classfile_FieldOrMethod_h_
#define _com_sun_org_apache_bcel_internal_classfile_FieldOrMethod_h_
//$ class com.sun.org.apache.bcel.internal.classfile.FieldOrMethod
//$ extends com.sun.org.apache.bcel.internal.classfile.AccessFlags
//$ implements java.lang.Cloneable,com.sun.org.apache.bcel.internal.classfile.Node

#include <com/sun/org/apache/bcel/internal/classfile/AccessFlags.h>
#include <com/sun/org/apache/bcel/internal/classfile/Node.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class AnnotationEntry;
							class Attribute;
							class ConstantPool;
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
		class DataInputStream;
		class DataOutputStream;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class FieldOrMethod : public ::com::sun::org::apache::bcel::internal::classfile::AccessFlags, public ::java::lang::Cloneable, public ::com::sun::org::apache::bcel::internal::classfile::Node {
	$class(FieldOrMethod, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::AccessFlags, ::java::lang::Cloneable, ::com::sun::org::apache::bcel::internal::classfile::Node)
public:
	FieldOrMethod();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::com::sun::org::apache::bcel::internal::classfile::FieldOrMethod* c);
	void init$(::java::io::DataInputStream* file, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	void init$(::java::io::DataInput* file, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	void init$(int32_t access_flags, int32_t name_index, int32_t signature_index, $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* attributes, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	virtual ::com::sun::org::apache::bcel::internal::classfile::FieldOrMethod* copy_(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* _constant_pool);
	void dump(::java::io::DataOutputStream* file);
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>* getAnnotationEntries();
	$Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* getAttributes();
	::com::sun::org::apache::bcel::internal::classfile::ConstantPool* getConstantPool();
	$String* getGenericSignature();
	$String* getName();
	int32_t getNameIndex();
	$String* getSignature();
	int32_t getSignatureIndex();
	void setAttributes($Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* attributes);
	void setConstantPool(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	void setNameIndex(int32_t name_index);
	void setSignatureIndex(int32_t signature_index);
	virtual $String* toString() override;
	int32_t name_index = 0;
	int32_t signature_index = 0;
	$Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* attributes = nullptr;
	int32_t attributes_count = 0;
	$Array<::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>* annotationEntries = nullptr;
	::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool = nullptr;
	$String* signatureAttributeString = nullptr;
	bool searchedForSignatureAttribute = false;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_FieldOrMethod_h_