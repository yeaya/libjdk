#ifndef _com_sun_org_apache_bcel_internal_classfile_AnnotationEntry_h_
#define _com_sun_org_apache_bcel_internal_classfile_AnnotationEntry_h_
//$ class com.sun.org.apache.bcel.internal.classfile.AnnotationEntry
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
							class Attribute;
							class ConstantPool;
							class ElementValuePair;
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
						namespace classfile {

class AnnotationEntry : public ::com::sun::org::apache::bcel::internal::classfile::Node {
	$class(AnnotationEntry, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Node)
public:
	AnnotationEntry();
	void init$(int32_t type_index, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool, bool isRuntimeVisible);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual void addElementNameValuePair(::com::sun::org::apache::bcel::internal::classfile::ElementValuePair* elementNameValuePair);
	static $Array<::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>* createAnnotationEntries($Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>* attrs);
	virtual void dump(::java::io::DataOutputStream* dos);
	virtual $String* getAnnotationType();
	virtual int32_t getAnnotationTypeIndex();
	virtual ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* getConstantPool();
	virtual $Array<::com::sun::org::apache::bcel::internal::classfile::ElementValuePair>* getElementValuePairs();
	int32_t getNumElementValuePairs();
	virtual int32_t getTypeIndex();
	virtual bool isRuntimeVisible();
	static ::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry* read(::java::io::DataInput* input, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool, bool isRuntimeVisible);
	virtual $String* toShortString();
	virtual $String* toString() override;
	int32_t typeIndex = 0;
	::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool = nullptr;
	bool isRuntimeVisible$ = false;
	::java::util::List* elementValuePairs = nullptr;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_AnnotationEntry_h_