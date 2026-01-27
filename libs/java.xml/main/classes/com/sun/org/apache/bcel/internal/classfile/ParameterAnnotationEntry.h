#ifndef _com_sun_org_apache_bcel_internal_classfile_ParameterAnnotationEntry_h_
#define _com_sun_org_apache_bcel_internal_classfile_ParameterAnnotationEntry_h_
//$ class com.sun.org.apache.bcel.internal.classfile.ParameterAnnotationEntry
//$ extends com.sun.org.apache.bcel.internal.classfile.Node

#include <com/sun/org/apache/bcel/internal/classfile/Node.h>
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

class ParameterAnnotationEntry : public ::com::sun::org::apache::bcel::internal::classfile::Node {
	$class(ParameterAnnotationEntry, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Node)
public:
	ParameterAnnotationEntry();
	void init$(::java::io::DataInput* input, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	static $Array<::com::sun::org::apache::bcel::internal::classfile::ParameterAnnotationEntry>* createParameterAnnotationEntries($Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* attrs);
	virtual void dump(::java::io::DataOutputStream* dos);
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>* getAnnotationEntries();
	$Array<::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>* annotationTable = nullptr;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_ParameterAnnotationEntry_h_