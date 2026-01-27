#ifndef _com_sun_org_apache_bcel_internal_classfile_LineNumberTable_h_
#define _com_sun_org_apache_bcel_internal_classfile_LineNumberTable_h_
//$ class com.sun.org.apache.bcel.internal.classfile.LineNumberTable
//$ extends com.sun.org.apache.bcel.internal.classfile.Attribute

#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <java/lang/Array.h>

#pragma push_macro("MAX_LINE_LENGTH")
#undef MAX_LINE_LENGTH

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {
							class ConstantPool;
							class LineNumber;
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

class LineNumberTable : public ::com::sun::org::apache::bcel::internal::classfile::Attribute {
	$class(LineNumberTable, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Attribute)
public:
	LineNumberTable();
	void init$(::com::sun::org::apache::bcel::internal::classfile::LineNumberTable* c);
	void init$(int32_t name_index, int32_t length, $Array<::com::sun::org::apache::bcel::internal::classfile::LineNumber>* line_number_table, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	void init$(int32_t name_index, int32_t length, ::java::io::DataInput* input, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::Attribute* copy(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* _constant_pool) override;
	virtual void dump(::java::io::DataOutputStream* file) override;
	$Array<::com::sun::org::apache::bcel::internal::classfile::LineNumber>* getLineNumberTable();
	int32_t getSourceLine(int32_t pos);
	int32_t getTableLength();
	void setLineNumberTable($Array<::com::sun::org::apache::bcel::internal::classfile::LineNumber>* lineNumberTable);
	virtual $String* toString() override;
	static const int32_t MAX_LINE_LENGTH = 72;
	$Array<::com::sun::org::apache::bcel::internal::classfile::LineNumber>* lineNumberTable = nullptr;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("MAX_LINE_LENGTH")

#endif // _com_sun_org_apache_bcel_internal_classfile_LineNumberTable_h_