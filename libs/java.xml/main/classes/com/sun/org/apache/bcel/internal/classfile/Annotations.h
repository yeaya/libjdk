#ifndef _com_sun_org_apache_bcel_internal_classfile_Annotations_h_
#define _com_sun_org_apache_bcel_internal_classfile_Annotations_h_
//$ class com.sun.org.apache.bcel.internal.classfile.Annotations
//$ extends com.sun.org.apache.bcel.internal.classfile.Attribute

#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class AnnotationEntry;
							class ConstantPool;
							class Visitor;
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class Annotations : public ::com::sun::org::apache::bcel::internal::classfile::Attribute {
	$class(Annotations, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Attribute)
public:
	Annotations();
	void init$(int8_t annotation_type, int32_t name_index, int32_t length, ::java::io::DataInput* input, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool, bool isRuntimeVisible);
	void init$(int8_t annotationType, int32_t nameIndex, int32_t length, $Array<::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>* annotationTable, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool, bool isRuntimeVisible);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>* getAnnotationEntries();
	int32_t getNumAnnotations();
	virtual bool isRuntimeVisible();
	void setAnnotationTable($Array<::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>* annotationTable);
	virtual void writeAnnotations(::java::io::DataOutputStream* dos);
	$Array<::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>* annotationTable = nullptr;
	bool isRuntimeVisible$ = false;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_Annotations_h_