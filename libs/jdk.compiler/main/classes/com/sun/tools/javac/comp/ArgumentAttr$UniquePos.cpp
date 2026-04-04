#include <com/sun/tools/javac/comp/ArgumentAttr$UniquePos.h>
#include <com/sun/tools/javac/comp/ArgumentAttr.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/AbstractLog.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/Log.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $ArgumentAttr = ::com::sun::tools::javac::comp::ArgumentAttr;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void ArgumentAttr$UniquePos::init$($ArgumentAttr* this$0, $JCTree* tree) {
	$set(this, this$0, this$0);
	this->pos = $nc(tree)->pos$;
	$set(this, source, $nc(this$0->log)->currentSource());
}

int32_t ArgumentAttr$UniquePos::hashCode() {
	return $sl(this->pos, 16 + $nc(this->source)->hashCode());
}

bool ArgumentAttr$UniquePos::equals(Object$* obj) {
	$var(ArgumentAttr$UniquePos, uniquePos, nullptr);
	bool var$2 = $instanceOf(ArgumentAttr$UniquePos, obj);
	if (var$2) {
		$assign(uniquePos, $cast(ArgumentAttr$UniquePos, obj));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && this->pos == $nc(uniquePos)->pos;
	return var$0 && this->source == uniquePos->source;
}

$String* ArgumentAttr$UniquePos::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($$nc($nc(this->source)->getFile())->getName()));
	var$0->append(" @ "_s);
	var$0->append(this->source->getLineNumber(this->pos));
	return $str(var$0);
}

ArgumentAttr$UniquePos::ArgumentAttr$UniquePos() {
}

$Class* ArgumentAttr$UniquePos::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/ArgumentAttr;", nullptr, $FINAL | $SYNTHETIC, $field(ArgumentAttr$UniquePos, this$0)},
		{"pos", "I", nullptr, 0, $field(ArgumentAttr$UniquePos, pos)},
		{"source", "Lcom/sun/tools/javac/util/DiagnosticSource;", nullptr, 0, $field(ArgumentAttr$UniquePos, source)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/ArgumentAttr;Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, 0, $method(ArgumentAttr$UniquePos, init$, void, $ArgumentAttr*, $JCTree*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ArgumentAttr$UniquePos, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ArgumentAttr$UniquePos, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ArgumentAttr$UniquePos, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.ArgumentAttr$UniquePos", "com.sun.tools.javac.comp.ArgumentAttr", "UniquePos", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.ArgumentAttr$UniquePos",
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
		"com.sun.tools.javac.comp.ArgumentAttr"
	};
	$loadClass(ArgumentAttr$UniquePos, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArgumentAttr$UniquePos);
	});
	return class$;
}

$Class* ArgumentAttr$UniquePos::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com