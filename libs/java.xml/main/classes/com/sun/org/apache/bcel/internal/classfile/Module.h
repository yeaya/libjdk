#ifndef _com_sun_org_apache_bcel_internal_classfile_Module_h_
#define _com_sun_org_apache_bcel_internal_classfile_Module_h_
//$ class com.sun.org.apache.bcel.internal.classfile.Module
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
							class ModuleExports;
							class ModuleOpens;
							class ModuleProvides;
							class ModuleRequires;
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

class Module : public ::com::sun::org::apache::bcel::internal::classfile::Attribute {
	$class(Module, $NO_CLASS_INIT, ::com::sun::org::apache::bcel::internal::classfile::Attribute)
public:
	Module();
	void init$(int32_t name_index, int32_t length, ::java::io::DataInput* input, ::com::sun::org::apache::bcel::internal::classfile::ConstantPool* constant_pool);
	virtual void accept(::com::sun::org::apache::bcel::internal::classfile::Visitor* v) override;
	virtual ::com::sun::org::apache::bcel::internal::classfile::Attribute* copy(::com::sun::org::apache::bcel::internal::classfile::ConstantPool* _constant_pool) override;
	virtual void dump(::java::io::DataOutputStream* file) override;
	$Array<::com::sun::org::apache::bcel::internal::classfile::ModuleExports>* getExportsTable();
	$Array<::com::sun::org::apache::bcel::internal::classfile::ModuleOpens>* getOpensTable();
	$Array<::com::sun::org::apache::bcel::internal::classfile::ModuleProvides>* getProvidesTable();
	$Array<::com::sun::org::apache::bcel::internal::classfile::ModuleRequires>* getRequiresTable();
	virtual $String* toString() override;
	int32_t moduleNameIndex = 0;
	int32_t moduleFlags = 0;
	int32_t moduleVersionIndex = 0;
	$Array<::com::sun::org::apache::bcel::internal::classfile::ModuleRequires>* requiresTable = nullptr;
	$Array<::com::sun::org::apache::bcel::internal::classfile::ModuleExports>* exportsTable = nullptr;
	$Array<::com::sun::org::apache::bcel::internal::classfile::ModuleOpens>* opensTable = nullptr;
	int32_t usesCount = 0;
	$ints* usesIndex = nullptr;
	$Array<::com::sun::org::apache::bcel::internal::classfile::ModuleProvides>* providesTable = nullptr;
};

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_bcel_internal_classfile_Module_h_