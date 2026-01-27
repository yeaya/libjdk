#include <com/sun/org/apache/bcel/internal/classfile/Module.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ModuleExports.h>
#include <com/sun/org/apache/bcel/internal/classfile/ModuleOpens.h>
#include <com/sun/org/apache/bcel/internal/classfile/ModuleProvides.h>
#include <com/sun/org/apache/bcel/internal/classfile/ModuleRequires.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ATTR_MODULE

using $ModuleExportsArray = $Array<::com::sun::org::apache::bcel::internal::classfile::ModuleExports>;
using $ModuleOpensArray = $Array<::com::sun::org::apache::bcel::internal::classfile::ModuleOpens>;
using $ModuleProvidesArray = $Array<::com::sun::org::apache::bcel::internal::classfile::ModuleProvides>;
using $ModuleRequiresArray = $Array<::com::sun::org::apache::bcel::internal::classfile::ModuleRequires>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ModuleExports = ::com::sun::org::apache::bcel::internal::classfile::ModuleExports;
using $ModuleOpens = ::com::sun::org::apache::bcel::internal::classfile::ModuleOpens;
using $ModuleProvides = ::com::sun::org::apache::bcel::internal::classfile::ModuleProvides;
using $ModuleRequires = ::com::sun::org::apache::bcel::internal::classfile::ModuleRequires;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _Module_FieldInfo_[] = {
	{"moduleNameIndex", "I", nullptr, $PRIVATE | $FINAL, $field(Module, moduleNameIndex)},
	{"moduleFlags", "I", nullptr, $PRIVATE | $FINAL, $field(Module, moduleFlags)},
	{"moduleVersionIndex", "I", nullptr, $PRIVATE | $FINAL, $field(Module, moduleVersionIndex)},
	{"requiresTable", "[Lcom/sun/org/apache/bcel/internal/classfile/ModuleRequires;", nullptr, $PRIVATE, $field(Module, requiresTable)},
	{"exportsTable", "[Lcom/sun/org/apache/bcel/internal/classfile/ModuleExports;", nullptr, $PRIVATE, $field(Module, exportsTable)},
	{"opensTable", "[Lcom/sun/org/apache/bcel/internal/classfile/ModuleOpens;", nullptr, $PRIVATE, $field(Module, opensTable)},
	{"usesCount", "I", nullptr, $PRIVATE | $FINAL, $field(Module, usesCount)},
	{"usesIndex", "[I", nullptr, $PRIVATE | $FINAL, $field(Module, usesIndex)},
	{"providesTable", "[Lcom/sun/org/apache/bcel/internal/classfile/ModuleProvides;", nullptr, $PRIVATE, $field(Module, providesTable)},
	{}
};

$MethodInfo _Module_MethodInfo_[] = {
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(Module, init$, void, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(Module, accept, void, $Visitor*)},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(Module, copy, $Attribute*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(Module, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getExportsTable", "()[Lcom/sun/org/apache/bcel/internal/classfile/ModuleExports;", nullptr, $PUBLIC, $method(Module, getExportsTable, $ModuleExportsArray*)},
	{"getOpensTable", "()[Lcom/sun/org/apache/bcel/internal/classfile/ModuleOpens;", nullptr, $PUBLIC, $method(Module, getOpensTable, $ModuleOpensArray*)},
	{"getProvidesTable", "()[Lcom/sun/org/apache/bcel/internal/classfile/ModuleProvides;", nullptr, $PUBLIC, $method(Module, getProvidesTable, $ModuleProvidesArray*)},
	{"getRequiresTable", "()[Lcom/sun/org/apache/bcel/internal/classfile/ModuleRequires;", nullptr, $PUBLIC, $method(Module, getRequiresTable, $ModuleRequiresArray*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Module, toString, $String*)},
	{}
};

$ClassInfo _Module_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.Module",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_Module_FieldInfo_,
	_Module_MethodInfo_
};

$Object* allocate$Module($Class* clazz) {
	return $of($alloc(Module));
}

void Module::init$(int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	$useLocalCurrentObjectStackCache();
	$Attribute::init$($Const::ATTR_MODULE, name_index, length, constant_pool);
	this->moduleNameIndex = $nc(input)->readUnsignedShort();
	this->moduleFlags = input->readUnsignedShort();
	this->moduleVersionIndex = input->readUnsignedShort();
	int32_t requires_count = input->readUnsignedShort();
	$set(this, requiresTable, $new($ModuleRequiresArray, requires_count));
	for (int32_t i = 0; i < requires_count; ++i) {
		$nc(this->requiresTable)->set(i, $$new($ModuleRequires, input));
	}
	int32_t exports_count = input->readUnsignedShort();
	$set(this, exportsTable, $new($ModuleExportsArray, exports_count));
	for (int32_t i = 0; i < exports_count; ++i) {
		$nc(this->exportsTable)->set(i, $$new($ModuleExports, input));
	}
	int32_t opens_count = input->readUnsignedShort();
	$set(this, opensTable, $new($ModuleOpensArray, opens_count));
	for (int32_t i = 0; i < opens_count; ++i) {
		$nc(this->opensTable)->set(i, $$new($ModuleOpens, input));
	}
	this->usesCount = input->readUnsignedShort();
	$set(this, usesIndex, $new($ints, this->usesCount));
	for (int32_t i = 0; i < this->usesCount; ++i) {
		$nc(this->usesIndex)->set(i, input->readUnsignedShort());
	}
	int32_t provides_count = input->readUnsignedShort();
	$set(this, providesTable, $new($ModuleProvidesArray, provides_count));
	for (int32_t i = 0; i < provides_count; ++i) {
		$nc(this->providesTable)->set(i, $$new($ModuleProvides, input));
	}
}

void Module::accept($Visitor* v) {
	$nc(v)->visitModule(this);
}

$ModuleRequiresArray* Module::getRequiresTable() {
	return this->requiresTable;
}

$ModuleExportsArray* Module::getExportsTable() {
	return this->exportsTable;
}

$ModuleOpensArray* Module::getOpensTable() {
	return this->opensTable;
}

$ModuleProvidesArray* Module::getProvidesTable() {
	return this->providesTable;
}

void Module::dump($DataOutputStream* file) {
	$useLocalCurrentObjectStackCache();
	$Attribute::dump(file);
	$nc(file)->writeShort(this->moduleNameIndex);
	file->writeShort(this->moduleFlags);
	file->writeShort(this->moduleVersionIndex);
	file->writeShort($nc(this->requiresTable)->length);
	{
		$var($ModuleRequiresArray, arr$, this->requiresTable);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ModuleRequires, entry, arr$->get(i$));
			{
				$nc(entry)->dump(file);
			}
		}
	}
	file->writeShort($nc(this->exportsTable)->length);
	{
		$var($ModuleExportsArray, arr$, this->exportsTable);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ModuleExports, entry, arr$->get(i$));
			{
				$nc(entry)->dump(file);
			}
		}
	}
	file->writeShort($nc(this->opensTable)->length);
	{
		$var($ModuleOpensArray, arr$, this->opensTable);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ModuleOpens, entry, arr$->get(i$));
			{
				$nc(entry)->dump(file);
			}
		}
	}
	file->writeShort($nc(this->usesIndex)->length);
	{
		$var($ints, arr$, this->usesIndex);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t entry = arr$->get(i$);
			{
				file->writeShort(entry);
			}
		}
	}
	file->writeShort($nc(this->providesTable)->length);
	{
		$var($ModuleProvidesArray, arr$, this->providesTable);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ModuleProvides, entry, arr$->get(i$));
			{
				$nc(entry)->dump(file);
			}
		}
	}
}

$String* Module::toString() {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPool, cp, $Attribute::getConstantPool());
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append("Module:\n"_s);
	buf->append("  name:    "_s)->append($($nc($($nc(cp)->getConstantString(this->moduleNameIndex, $Const::CONSTANT_Module)))->replace(u'/', u'.')))->append("\n"_s);
	buf->append("  flags:   "_s)->append($($String::format("%04x"_s, $$new($ObjectArray, {$($of($Integer::valueOf(this->moduleFlags)))}))))->append("\n"_s);
	$var($String, version, this->moduleVersionIndex == 0 ? "0"_s : $nc(cp)->getConstantString(this->moduleVersionIndex, $Const::CONSTANT_Utf8));
	buf->append("  version: "_s)->append(version)->append("\n"_s);
	buf->append("  requires("_s)->append($nc(this->requiresTable)->length)->append("):\n"_s);
	{
		$var($ModuleRequiresArray, arr$, this->requiresTable);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ModuleRequires, module, arr$->get(i$));
			{
				buf->append("    "_s)->append($($nc(module)->toString(cp)))->append("\n"_s);
			}
		}
	}
	buf->append("  exports("_s)->append($nc(this->exportsTable)->length)->append("):\n"_s);
	{
		$var($ModuleExportsArray, arr$, this->exportsTable);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ModuleExports, module, arr$->get(i$));
			{
				buf->append("    "_s)->append($($nc(module)->toString(cp)))->append("\n"_s);
			}
		}
	}
	buf->append("  opens("_s)->append($nc(this->opensTable)->length)->append("):\n"_s);
	{
		$var($ModuleOpensArray, arr$, this->opensTable);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ModuleOpens, module, arr$->get(i$));
			{
				buf->append("    "_s)->append($($nc(module)->toString(cp)))->append("\n"_s);
			}
		}
	}
	buf->append("  uses("_s)->append($nc(this->usesIndex)->length)->append("):\n"_s);
	{
		$var($ints, arr$, this->usesIndex);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t index = arr$->get(i$);
			{
				$var($String, class_name, cp->getConstantString(index, $Const::CONSTANT_Class));
				buf->append("    "_s)->append($($Utility::compactClassName(class_name, false)))->append("\n"_s);
			}
		}
	}
	buf->append("  provides("_s)->append($nc(this->providesTable)->length)->append("):\n"_s);
	{
		$var($ModuleProvidesArray, arr$, this->providesTable);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ModuleProvides, module, arr$->get(i$));
			{
				buf->append("    "_s)->append($($nc(module)->toString(cp)))->append("\n"_s);
			}
		}
	}
	return buf->substring(0, buf->length() - 1);
}

$Attribute* Module::copy($ConstantPool* _constant_pool) {
	$useLocalCurrentObjectStackCache();
	$var(Module, c, $cast(Module, clone()));
	$set($nc(c), requiresTable, $new($ModuleRequiresArray, $nc(this->requiresTable)->length));
	for (int32_t i = 0; i < $nc(this->requiresTable)->length; ++i) {
		$nc(c->requiresTable)->set(i, $($nc($nc(this->requiresTable)->get(i))->copy()));
	}
	$set(c, exportsTable, $new($ModuleExportsArray, $nc(this->exportsTable)->length));
	for (int32_t i = 0; i < $nc(this->exportsTable)->length; ++i) {
		$nc(c->exportsTable)->set(i, $($nc($nc(this->exportsTable)->get(i))->copy()));
	}
	$set(c, opensTable, $new($ModuleOpensArray, $nc(this->opensTable)->length));
	for (int32_t i = 0; i < $nc(this->opensTable)->length; ++i) {
		$nc(c->opensTable)->set(i, $($nc($nc(this->opensTable)->get(i))->copy()));
	}
	$set(c, providesTable, $new($ModuleProvidesArray, $nc(this->providesTable)->length));
	for (int32_t i = 0; i < $nc(this->providesTable)->length; ++i) {
		$nc(c->providesTable)->set(i, $($nc($nc(this->providesTable)->get(i))->copy()));
	}
	c->setConstantPool(_constant_pool);
	return c;
}

Module::Module() {
}

$Class* Module::load$($String* name, bool initialize) {
	$loadClass(Module, name, initialize, &_Module_ClassInfo_, allocate$Module);
	return class$;
}

$Class* Module::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com