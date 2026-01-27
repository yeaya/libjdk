#ifndef _com_sun_org_apache_bcel_internal_classfile_Attribute_h_
#define _com_sun_org_apache_bcel_internal_classfile_Attribute_h_
//$ class com.sun.org.apache.bcel.internal.classfile.Attribute
//$ extends java.lang.Cloneable
//$ implements com.sun.org.apache.bcel.internal.classfile.Node

#include <com/sun/org/apache/bcel/internal/classfile/Node.h>
#include <java/lang/Cloneable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class ConstantPool;
							class UnknownAttributeReader;
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
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

class Attribute : public ::java::lang::Cloneable, public ::com::sun::org::apache::bcel::internal::classfile::Node {
	$class(Attribute, 0, ::java::lang::Cloneable, ::com::sun::org::apache::bcel::internal::classfile::Node)
public:
	Attribute();
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override {}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int8_t tag, int32_t name_index, int32_t length, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	static void addAttributeReader($String* name, ::com::sun::org::apache::bcel::internal::classfile::UnknownAttributeReader* r);
	virtual $Object* clone() override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::Attribute* copy(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* _constant_pool) {return nullptr;}
	virtual void dump(::java::io::DataOutputStream* file);
	::com::sun::org::apache::bcel::internal::classfile::ConstantPool* getConstantPool();
	int32_t getLength();
	virtual $String* getName();
	int32_t getNameIndex();
	int8_t getTag();
	static void println($String* msg);
	static ::com::sun::org::apache::bcel::internal::classfile::Attribute* readAttribute(::java::io::DataInput* file, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	static ::com::sun::org::apache::bcel::internal::classfile::Attribute* readAttribute(::java::io::DataInputStream* file, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	static void removeAttributeReader($String* name);
	void setConstantPool(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	void setLength(int32_t length);
	void setNameIndex(int32_t name_index);
	virtual $String* toString() override;
	static const bool debug = false;
	int32_t name_index = 0;
	int32_t length = 0;
	int8_t tag = 0;
	::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool = nullptr;
	static ::java::util::Map* readers;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_Attribute_h_