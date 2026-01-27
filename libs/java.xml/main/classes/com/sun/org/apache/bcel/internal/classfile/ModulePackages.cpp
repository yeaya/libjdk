#include <com/sun/org/apache/bcel/internal/classfile/ModulePackages.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/classfile/Visitor.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef ATTR_MODULE_PACKAGES

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $Visitor = ::com::sun::org::apache::bcel::internal::classfile::Visitor;
using $DataInput = ::java::io::DataInput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$FieldInfo _ModulePackages_FieldInfo_[] = {
	{"packageIndexTable", "[I", nullptr, $PRIVATE, $field(ModulePackages, packageIndexTable)},
	{}
};

$MethodInfo _ModulePackages_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/ModulePackages;)V", nullptr, $PUBLIC, $method(ModulePackages, init$, void, ModulePackages*)},
	{"<init>", "(II[ILcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, $PUBLIC, $method(ModulePackages, init$, void, int32_t, int32_t, $ints*, $ConstantPool*)},
	{"<init>", "(IILjava/io/DataInput;Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)V", nullptr, 0, $method(ModulePackages, init$, void, int32_t, int32_t, $DataInput*, $ConstantPool*), "java.io.IOException"},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/classfile/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(ModulePackages, accept, void, $Visitor*)},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/classfile/ConstantPool;)Lcom/sun/org/apache/bcel/internal/classfile/Attribute;", nullptr, $PUBLIC, $virtualMethod(ModulePackages, copy, $Attribute*, $ConstantPool*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(ModulePackages, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"getNumberOfPackages", "()I", nullptr, $PUBLIC, $method(ModulePackages, getNumberOfPackages, int32_t)},
	{"getPackageIndexTable", "()[I", nullptr, $PUBLIC, $method(ModulePackages, getPackageIndexTable, $ints*)},
	{"getPackageNames", "()[Ljava/lang/String;", nullptr, $PUBLIC, $method(ModulePackages, getPackageNames, $StringArray*)},
	{"setPackageIndexTable", "([I)V", nullptr, $PUBLIC, $method(ModulePackages, setPackageIndexTable, void, $ints*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ModulePackages, toString, $String*)},
	{}
};

$ClassInfo _ModulePackages_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.ModulePackages",
	"com.sun.org.apache.bcel.internal.classfile.Attribute",
	nullptr,
	_ModulePackages_FieldInfo_,
	_ModulePackages_MethodInfo_
};

$Object* allocate$ModulePackages($Class* clazz) {
	return $of($alloc(ModulePackages));
}

void ModulePackages::init$(ModulePackages* c) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(c)->getNameIndex();
	int32_t var$1 = c->getLength();
	$var($ints, var$2, c->getPackageIndexTable());
	ModulePackages::init$(var$0, var$1, var$2, $(c->getConstantPool()));
}

void ModulePackages::init$(int32_t nameIndex, int32_t length, $ints* packageIndexTable, $ConstantPool* constantPool) {
	$Attribute::init$($Const::ATTR_MODULE_PACKAGES, nameIndex, length, constantPool);
	$set(this, packageIndexTable, packageIndexTable != nullptr ? packageIndexTable : $new($ints, 0));
}

void ModulePackages::init$(int32_t name_index, int32_t length, $DataInput* input, $ConstantPool* constant_pool) {
	ModulePackages::init$(name_index, length, ($ints*)nullptr, constant_pool);
	int32_t number_of_packages = $nc(input)->readUnsignedShort();
	$set(this, packageIndexTable, $new($ints, number_of_packages));
	for (int32_t i = 0; i < number_of_packages; ++i) {
		$nc(this->packageIndexTable)->set(i, input->readUnsignedShort());
	}
}

void ModulePackages::accept($Visitor* v) {
	$nc(v)->visitModulePackages(this);
}

void ModulePackages::dump($DataOutputStream* file) {
	$Attribute::dump(file);
	$nc(file)->writeShort($nc(this->packageIndexTable)->length);
	{
		$var($ints, arr$, this->packageIndexTable);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t index = arr$->get(i$);
			{
				file->writeShort(index);
			}
		}
	}
}

$ints* ModulePackages::getPackageIndexTable() {
	return this->packageIndexTable;
}

int32_t ModulePackages::getNumberOfPackages() {
	return this->packageIndexTable == nullptr ? 0 : $nc(this->packageIndexTable)->length;
}

$StringArray* ModulePackages::getPackageNames() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, names, $new($StringArray, $nc(this->packageIndexTable)->length));
	for (int32_t i = 0; i < $nc(this->packageIndexTable)->length; ++i) {
		names->set(i, $($nc($($nc($($Attribute::getConstantPool()))->getConstantString($nc(this->packageIndexTable)->get(i), $Const::CONSTANT_Package)))->replace(u'/', u'.')));
	}
	return names;
}

void ModulePackages::setPackageIndexTable($ints* packageIndexTable) {
	$set(this, packageIndexTable, packageIndexTable != nullptr ? packageIndexTable : $new($ints, 0));
}

$String* ModulePackages::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append("ModulePackages("_s);
	buf->append($nc(this->packageIndexTable)->length);
	buf->append("):\n"_s);
	{
		$var($ints, arr$, this->packageIndexTable);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t index = arr$->get(i$);
			{
				$var($String, package_name, $nc($($Attribute::getConstantPool()))->getConstantString(index, $Const::CONSTANT_Package));
				buf->append("  "_s)->append($($Utility::compactClassName(package_name, false)))->append("\n"_s);
			}
		}
	}
	return buf->substring(0, buf->length() - 1);
}

$Attribute* ModulePackages::copy($ConstantPool* _constant_pool) {
	$var(ModulePackages, c, $cast(ModulePackages, clone()));
	if (this->packageIndexTable != nullptr) {
		$set($nc(c), packageIndexTable, $new($ints, $nc(this->packageIndexTable)->length));
		$System::arraycopy(this->packageIndexTable, 0, c->packageIndexTable, 0, $nc(this->packageIndexTable)->length);
	}
	$nc(c)->setConstantPool(_constant_pool);
	return c;
}

ModulePackages::ModulePackages() {
}

$Class* ModulePackages::load$($String* name, bool initialize) {
	$loadClass(ModulePackages, name, initialize, &_ModulePackages_ClassInfo_, allocate$ModulePackages);
	return class$;
}

$Class* ModulePackages::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com