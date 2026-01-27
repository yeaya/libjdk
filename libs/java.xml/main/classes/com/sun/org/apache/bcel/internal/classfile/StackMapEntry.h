#ifndef _com_sun_org_apache_bcel_internal_classfile_StackMapEntry_h_
#define _com_sun_org_apache_bcel_internal_classfile_StackMapEntry_h_
//$ class com.sun.org.apache.bcel.internal.classfile.StackMapEntry
//$ extends com.sun.org.apache.bcel.internal.classfile.Node
//$ implements java.lang.Cloneable

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
							class ConstantPool;
							class StackMapType;
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

class StackMapEntry : public ::com::sun::org::apache::bcel::internal::classfile::Node, public ::java::lang::Cloneable {
	$class(StackMapEntry, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Node, ::java::lang::Cloneable)
public:
	StackMapEntry();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::io::DataInput* input, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool);
	void init$(int32_t byteCodeOffset, int32_t numberOfLocals, $Array<::com::sun::org::apache::bcel::internal::classfile::StackMapType>* typesOfLocals, int32_t numberOfStackItems, $Array<::com::sun::org::apache::bcel::internal::classfile::StackMapType>* typesOfStackItems, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool);
	void init$(int32_t tag, int32_t byteCodeOffset, $Array<::com::sun::org::apache::bcel::internal::classfile::StackMapType>* typesOfLocals, $Array<::com::sun::org::apache::bcel::internal::classfile::StackMapType>* typesOfStackItems, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	::com::sun::org::apache::bcel::internal::classfile::StackMapEntry* copy();
	void dump(::java::io::DataOutputStream* file);
	int32_t getByteCodeOffset();
	::com::sun::org::apache::bcel::internal::classfile::ConstantPool* getConstantPool();
	int32_t getFrameType();
	int32_t getMapEntrySize();
	int32_t getNumberOfLocals();
	int32_t getNumberOfStackItems();
	$Array<::com::sun::org::apache::bcel::internal::classfile::StackMapType>* getTypesOfLocals();
	$Array<::com::sun::org::apache::bcel::internal::classfile::StackMapType>* getTypesOfStackItems();
	void setByteCodeOffset(int32_t new_offset);
	void setConstantPool(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool);
	void setFrameType(int32_t f);
	void setNumberOfLocals(int32_t n);
	void setNumberOfStackItems(int32_t n);
	void setTypesOfLocals($Array<::com::sun::org::apache::bcel::internal::classfile::StackMapType>* types);
	void setTypesOfStackItems($Array<::com::sun::org::apache::bcel::internal::classfile::StackMapType>* types);
	virtual $String* toString() override;
	void updateByteCodeOffset(int32_t delta);
	int32_t frameType = 0;
	int32_t byteCodeOffset = 0;
	$Array<::com::sun::org::apache::bcel::internal::classfile::StackMapType>* typesOfLocals = nullptr;
	$Array<::com::sun::org::apache::bcel::internal::classfile::StackMapType>* typesOfStackItems = nullptr;
	::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constantPool = nullptr;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_StackMapEntry_h_