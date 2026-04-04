#include <com/sun/tools/javac/comp/Lower$LowerSignatureGenerator.h>
#include <com/sun/tools/javac/code/Types$SignatureGenerator.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/comp/Lower.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Types$SignatureGenerator = ::com::sun::tools::javac::code::Types$SignatureGenerator;
using $Lower = ::com::sun::tools::javac::comp::Lower;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Lower$LowerSignatureGenerator::init$($Lower* this$0) {
	$set(this, this$0, this$0);
	$Types$SignatureGenerator::init$(this$0->types);
	$set(this, sb, $new($StringBuilder));
}

void Lower$LowerSignatureGenerator::append(char16_t ch) {
	$nc(this->sb)->append(ch);
}

void Lower$LowerSignatureGenerator::append($bytes* ba) {
	$nc(this->sb)->append($$new($String, ba));
}

void Lower$LowerSignatureGenerator::append($Name* name) {
	$nc(this->sb)->append($($nc(name)->toString()));
}

$String* Lower$LowerSignatureGenerator::toString() {
	return $nc(this->sb)->toString();
}

Lower$LowerSignatureGenerator::Lower$LowerSignatureGenerator() {
}

$Class* Lower$LowerSignatureGenerator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Lower;", nullptr, $FINAL | $SYNTHETIC, $field(Lower$LowerSignatureGenerator, this$0)},
		{"sb", "Ljava/lang/StringBuilder;", nullptr, 0, $field(Lower$LowerSignatureGenerator, sb)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Lower;)V", nullptr, 0, $method(Lower$LowerSignatureGenerator, init$, void, $Lower*)},
		{"append", "(C)V", nullptr, $PROTECTED, $virtualMethod(Lower$LowerSignatureGenerator, append, void, char16_t)},
		{"append", "([B)V", nullptr, $PROTECTED, $virtualMethod(Lower$LowerSignatureGenerator, append, void, $bytes*)},
		{"append", "(Lcom/sun/tools/javac/util/Name;)V", nullptr, $PROTECTED, $virtualMethod(Lower$LowerSignatureGenerator, append, void, $Name*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Lower$LowerSignatureGenerator, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Lower$LowerSignatureGenerator", "com.sun.tools.javac.comp.Lower", "LowerSignatureGenerator", $PRIVATE},
		{"com.sun.tools.javac.code.Types$SignatureGenerator", "com.sun.tools.javac.code.Types", "SignatureGenerator", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Lower$LowerSignatureGenerator",
		"com.sun.tools.javac.code.Types$SignatureGenerator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Lower"
	};
	$loadClass(Lower$LowerSignatureGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Lower$LowerSignatureGenerator);
	});
	return class$;
}

$Class* Lower$LowerSignatureGenerator::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com