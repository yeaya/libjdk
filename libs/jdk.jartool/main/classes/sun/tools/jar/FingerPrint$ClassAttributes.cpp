#include <sun/tools/jar/FingerPrint$ClassAttributes.h>

#include <java/lang/CharSequence.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>
#include <jdk/internal/org/objectweb/asm/FieldVisitor.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <sun/tools/jar/FingerPrint$Field.h>
#include <sun/tools/jar/FingerPrint$Method.h>
#include <sun/tools/jar/FingerPrint.h>
#include <jcpp.h>

#undef ACC_PROTECTED
#undef ACC_PUBLIC
#undef ASM7

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $ClassVisitor = ::jdk::internal::org::objectweb::asm$::ClassVisitor;
using $FieldVisitor = ::jdk::internal::org::objectweb::asm$::FieldVisitor;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $FingerPrint = ::sun::tools::jar::FingerPrint;
using $FingerPrint$Field = ::sun::tools::jar::FingerPrint$Field;
using $FingerPrint$Method = ::sun::tools::jar::FingerPrint$Method;

namespace sun {
	namespace tools {
		namespace jar {

$FieldInfo _FingerPrint$ClassAttributes_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FingerPrint$ClassAttributes, name)},
	{"outerClassName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FingerPrint$ClassAttributes, outerClassName)},
	{"superName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FingerPrint$ClassAttributes, superName)},
	{"version", "I", nullptr, $PRIVATE, $field(FingerPrint$ClassAttributes, version)},
	{"access", "I", nullptr, $PRIVATE, $field(FingerPrint$ClassAttributes, access)},
	{"publicClass", "Z", nullptr, $PRIVATE, $field(FingerPrint$ClassAttributes, publicClass)},
	{"nestedClass", "Z", nullptr, $PRIVATE, $field(FingerPrint$ClassAttributes, nestedClass)},
	{"fields", "Ljava/util/Set;", "Ljava/util/Set<Lsun/tools/jar/FingerPrint$Field;>;", $PRIVATE | $FINAL, $field(FingerPrint$ClassAttributes, fields)},
	{"methods", "Ljava/util/Set;", "Ljava/util/Set<Lsun/tools/jar/FingerPrint$Method;>;", $PRIVATE | $FINAL, $field(FingerPrint$ClassAttributes, methods)},
	{}
};

$MethodInfo _FingerPrint$ClassAttributes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FingerPrint$ClassAttributes::*)()>(&FingerPrint$ClassAttributes::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isPublic", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(FingerPrint$ClassAttributes::*)(int32_t)>(&FingerPrint$ClassAttributes::isPublic))},
	{"visit", "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitEnd", "()V", nullptr, $PUBLIC},
	{"visitField", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)Ljdk/internal/org/objectweb/asm/FieldVisitor;", nullptr, $PUBLIC},
	{"visitInnerClass", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"visitMethod", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/MethodVisitor;", nullptr, $PUBLIC},
	{"visitOuterClass", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FingerPrint$ClassAttributes_InnerClassesInfo_[] = {
	{"sun.tools.jar.FingerPrint$ClassAttributes", "sun.tools.jar.FingerPrint", "ClassAttributes", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _FingerPrint$ClassAttributes_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.tools.jar.FingerPrint$ClassAttributes",
	"jdk.internal.org.objectweb.asm.ClassVisitor",
	nullptr,
	_FingerPrint$ClassAttributes_FieldInfo_,
	_FingerPrint$ClassAttributes_MethodInfo_,
	nullptr,
	nullptr,
	_FingerPrint$ClassAttributes_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.FingerPrint"
};

$Object* allocate$FingerPrint$ClassAttributes($Class* clazz) {
	return $of($alloc(FingerPrint$ClassAttributes));
}

void FingerPrint$ClassAttributes::init$() {
	$ClassVisitor::init$($Opcodes::ASM7);
	$set(this, fields, $new($HashSet));
	$set(this, methods, $new($HashSet));
}

bool FingerPrint$ClassAttributes::isPublic(int32_t access) {
	return (((int32_t)(access & (uint32_t)$Opcodes::ACC_PUBLIC)) == $Opcodes::ACC_PUBLIC) || (((int32_t)(access & (uint32_t)$Opcodes::ACC_PROTECTED)) == $Opcodes::ACC_PROTECTED);
}

void FingerPrint$ClassAttributes::visit(int32_t version, int32_t access, $String* name, $String* signature, $String* superName, $StringArray* interfaces) {
	this->version = version;
	this->access = access;
	$set(this, name, name);
	this->nestedClass = $nc(name)->contains("$"_s);
	$set(this, superName, superName);
	this->publicClass = isPublic(access);
}

void FingerPrint$ClassAttributes::visitOuterClass($String* owner, $String* name, $String* desc) {
	if (!this->nestedClass) {
		return;
	}
	$set(this, outerClassName, owner);
}

void FingerPrint$ClassAttributes::visitInnerClass($String* name, $String* outerName, $String* innerName, int32_t access) {
	if (!this->nestedClass) {
		return;
	}
	if (outerName == nullptr) {
		return;
	}
	if (!$nc(this->name)->equals(name)) {
		return;
	}
	if (this->outerClassName == nullptr) {
		$set(this, outerClassName, outerName);
	}
}

$FieldVisitor* FingerPrint$ClassAttributes::visitField(int32_t access, $String* name, $String* desc, $String* signature, Object$* value) {
	if (isPublic(access)) {
		$nc(this->fields)->add($$new($FingerPrint$Field, access, name, desc));
	}
	return nullptr;
}

$MethodVisitor* FingerPrint$ClassAttributes::visitMethod(int32_t access, $String* name, $String* desc$renamed, $String* signature, $StringArray* exceptions) {
	$useLocalCurrentObjectStackCache();
	$var($String, desc, desc$renamed);
	if (isPublic(access)) {
		$var($Set, exceptionSet, $new($HashSet));
		if (exceptions != nullptr) {
			{
				$var($StringArray, arr$, exceptions);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($String, e, arr$->get(i$));
					{
						exceptionSet->add(e);
					}
				}
			}
		}
		int32_t n = 0;
		if (desc != nullptr && (n = desc->lastIndexOf((int32_t)u')')) != -1) {
			$assign(desc, desc->substring(0, n + 1));
			$nc(this->methods)->add($$new($FingerPrint$Method, access, name, desc, exceptionSet));
		}
	}
	return nullptr;
}

void FingerPrint$ClassAttributes::visitEnd() {
	this->nestedClass = this->outerClassName != nullptr;
}

bool FingerPrint$ClassAttributes::equals(Object$* that) {
	if (that == nullptr) {
		return false;
	}
	if ($equals(this, that)) {
		return true;
	}
	if (!($instanceOf(FingerPrint$ClassAttributes, that))) {
		return false;
	}
	$var(FingerPrint$ClassAttributes, clsAttrs, $cast(FingerPrint$ClassAttributes, that));
	bool superNameOkay = this->superName != nullptr ? $nc(this->superName)->equals($nc(clsAttrs)->superName) : true;
	bool var$0 = this->access == $nc(clsAttrs)->access && superNameOkay && $nc(this->fields)->equals(clsAttrs->fields);
	return var$0 && $nc(this->methods)->equals(clsAttrs->methods);
}

int32_t FingerPrint$ClassAttributes::hashCode() {
	int32_t result = 17;
	result = 37 * result + this->access;
	result = $str({$$str(37 * result), this->superName}) != nullptr ? $nc(this->superName)->hashCode() : 0;
	result = 37 * result + $nc(this->fields)->hashCode();
	result = 37 * result + $nc(this->methods)->hashCode();
	return result;
}

FingerPrint$ClassAttributes::FingerPrint$ClassAttributes() {
}

$Class* FingerPrint$ClassAttributes::load$($String* name, bool initialize) {
	$loadClass(FingerPrint$ClassAttributes, name, initialize, &_FingerPrint$ClassAttributes_ClassInfo_, allocate$FingerPrint$ClassAttributes);
	return class$;
}

$Class* FingerPrint$ClassAttributes::class$ = nullptr;

		} // jar
	} // tools
} // sun