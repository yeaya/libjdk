#include <sun/tools/jar/FingerPrint$ClassAttributes.h>
#include <java/lang/CharSequence.h>
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
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $ClassVisitor = ::jdk::internal::org::objectweb::asm$::ClassVisitor;
using $FieldVisitor = ::jdk::internal::org::objectweb::asm$::FieldVisitor;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $FingerPrint$Field = ::sun::tools::jar::FingerPrint$Field;
using $FingerPrint$Method = ::sun::tools::jar::FingerPrint$Method;

namespace sun {
	namespace tools {
		namespace jar {

void FingerPrint$ClassAttributes::init$() {
	$ClassVisitor::init$($Opcodes::ASM7);
	$set(this, fields, $new($HashSet));
	$set(this, methods, $new($HashSet));
}

bool FingerPrint$ClassAttributes::isPublic(int32_t access) {
	return ((access & $Opcodes::ACC_PUBLIC) == $Opcodes::ACC_PUBLIC) || ((access & $Opcodes::ACC_PROTECTED) == $Opcodes::ACC_PROTECTED);
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
		this->fields->add($$new($FingerPrint$Field, access, name, desc));
	}
	return nullptr;
}

$MethodVisitor* FingerPrint$ClassAttributes::visitMethod(int32_t access, $String* name, $String* desc$renamed, $String* signature, $StringArray* exceptions) {
	$useLocalObjectStack();
	$var($String, desc, desc$renamed);
	if (isPublic(access)) {
		$var($Set, exceptionSet, $new($HashSet));
		if (exceptions != nullptr) {
			$var($StringArray, arr$, exceptions);
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$var($String, e, arr$->get(i$));
				{
					exceptionSet->add(e);
				}
			}
		}
		int32_t n = 0;
		if (desc != nullptr && (n = desc->lastIndexOf(u')')) != -1) {
			$assign(desc, desc->substring(0, n + 1));
			this->methods->add($$new($FingerPrint$Method, access, name, desc, exceptionSet));
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
	bool superNameOkay = this->superName != nullptr ? this->superName->equals($nc(clsAttrs)->superName) : true;
	bool var$0 = this->access == $nc(clsAttrs)->access && superNameOkay && this->fields->equals(clsAttrs->fields);
	return var$0 && this->methods->equals(clsAttrs->methods);
}

int32_t FingerPrint$ClassAttributes::hashCode() {
	int32_t result = 17;
	result = 37 * result + this->access;
	result = $str({$$str(37 * result), this->superName}) != nullptr ? $nc(this->superName)->hashCode() : 0;
	result = 37 * result + this->fields->hashCode();
	result = 37 * result + this->methods->hashCode();
	return result;
}

FingerPrint$ClassAttributes::FingerPrint$ClassAttributes() {
}

$Class* FingerPrint$ClassAttributes::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FingerPrint$ClassAttributes, init$, void)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(FingerPrint$ClassAttributes, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(FingerPrint$ClassAttributes, hashCode, int32_t)},
		{"isPublic", "(I)Z", nullptr, $PRIVATE, $method(FingerPrint$ClassAttributes, isPublic, bool, int32_t)},
		{"visit", "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(FingerPrint$ClassAttributes, visit, void, int32_t, int32_t, $String*, $String*, $String*, $StringArray*)},
		{"visitEnd", "()V", nullptr, $PUBLIC, $virtualMethod(FingerPrint$ClassAttributes, visitEnd, void)},
		{"visitField", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)Ljdk/internal/org/objectweb/asm/FieldVisitor;", nullptr, $PUBLIC, $virtualMethod(FingerPrint$ClassAttributes, visitField, $FieldVisitor*, int32_t, $String*, $String*, $String*, Object$*)},
		{"visitInnerClass", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(FingerPrint$ClassAttributes, visitInnerClass, void, $String*, $String*, $String*, int32_t)},
		{"visitMethod", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/MethodVisitor;", nullptr, $PUBLIC, $virtualMethod(FingerPrint$ClassAttributes, visitMethod, $MethodVisitor*, int32_t, $String*, $String*, $String*, $StringArray*)},
		{"visitOuterClass", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(FingerPrint$ClassAttributes, visitOuterClass, void, $String*, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.tools.jar.FingerPrint$ClassAttributes", "sun.tools.jar.FingerPrint", "ClassAttributes", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.tools.jar.FingerPrint$ClassAttributes",
		"jdk.internal.org.objectweb.asm.ClassVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.tools.jar.FingerPrint"
	};
	$loadClass(FingerPrint$ClassAttributes, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FingerPrint$ClassAttributes);
	});
	return class$;
}

$Class* FingerPrint$ClassAttributes::class$ = nullptr;

		} // jar
	} // tools
} // sun