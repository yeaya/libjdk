#include <com/sun/tools/javac/file/JRTIndex$CtSym.h>
#include <com/sun/tools/javac/file/JRTIndex.h>
#include <jcpp.h>

#undef EMPTY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

JRTIndex$CtSym* JRTIndex$CtSym::EMPTY = nullptr;

void JRTIndex$CtSym::init$(bool hidden, bool proprietary, $String* minProfile) {
	this->hidden = hidden;
	this->proprietary = proprietary;
	$set(this, minProfile, minProfile);
}

$String* JRTIndex$CtSym::toString() {
	$var($StringBuilder, sb, $new($StringBuilder, "CtSym["_s));
	bool needSep = false;
	if (this->hidden) {
		sb->append("hidden"_s);
		needSep = true;
	}
	if (this->proprietary) {
		if (needSep) {
			sb->append(","_s);
		}
		sb->append("proprietary"_s);
		needSep = true;
	}
	if (this->minProfile != nullptr) {
		if (needSep) {
			sb->append(","_s);
		}
		sb->append(this->minProfile);
	}
	sb->append("]"_s);
	return sb->toString();
}

void JRTIndex$CtSym::clinit$($Class* clazz) {
	$assignStatic(JRTIndex$CtSym::EMPTY, $new(JRTIndex$CtSym, false, false, nullptr));
}

JRTIndex$CtSym::JRTIndex$CtSym() {
}

$Class* JRTIndex$CtSym::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hidden", "Z", nullptr, $PUBLIC | $FINAL, $field(JRTIndex$CtSym, hidden)},
		{"proprietary", "Z", nullptr, $PUBLIC | $FINAL, $field(JRTIndex$CtSym, proprietary)},
		{"minProfile", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(JRTIndex$CtSym, minProfile)},
		{"EMPTY", "Lcom/sun/tools/javac/file/JRTIndex$CtSym;", nullptr, $STATIC | $FINAL, $staticField(JRTIndex$CtSym, EMPTY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ZZLjava/lang/String;)V", nullptr, 0, $method(JRTIndex$CtSym, init$, void, bool, bool, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JRTIndex$CtSym, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.file.JRTIndex$CtSym", "com.sun.tools.javac.file.JRTIndex", "CtSym", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.file.JRTIndex$CtSym",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.file.JRTIndex"
	};
	$loadClass(JRTIndex$CtSym, name, initialize, &classInfo$$, JRTIndex$CtSym::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JRTIndex$CtSym);
	});
	return class$;
}

$Class* JRTIndex$CtSym::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com