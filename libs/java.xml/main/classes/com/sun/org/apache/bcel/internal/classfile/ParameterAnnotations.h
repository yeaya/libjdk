#ifndef _com_sun_org_apache_bcel_internal_classfile_ParameterAnnotations_h_
#define _com_sun_org_apache_bcel_internal_classfile_ParameterAnnotations_h_
//$ class com.sun.org.apache.bcel.internal.classfile.ParameterAnnotations
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
							class ConstantPool;
							class ParameterAnnotationEntry;
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

class ParameterAnnotations : public ::com::sun::org::apache::bcel::internal::classfile::Attribute {
	$class(ParameterAnnotations, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Attribute)
public:
	ParameterAnnotations();
	void init$(int8_t parameter_annotation_type, int32_t name_index, int32_t length, ::java::io::DataInput* input, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	void init$(int8_t parameterAnnotationType, int32_t nameIndex, int32_t length, $Array<::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotationEntry>* parameterAnnotationTable, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::Attribute* copy(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool) override;
	virtual void dump(::java::io::DataOutputStream* dos) override;
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotationEntry>* getParameterAnnotationEntries();
	$Array<::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotationEntry>* getParameterAnnotationTable();
	void setParameterAnnotationTable($Array<::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotationEntry>* parameterAnnotationTable);
	$Array<::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotationEntry>* parameterAnnotationTable = nullptr;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_ParameterAnnotations_h_