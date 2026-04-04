#include <com/sun/tools/javac/jvm/CRTable$SourceRange.h>
#include <com/sun/tools/javac/jvm/CRTable.h>
#include <com/sun/tools/javac/util/Position.h>
#include <jcpp.h>

#undef NOPOS

using $Position = ::com::sun::tools::javac::util::Position;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void CRTable$SourceRange::init$() {
	this->startPos = $Position::NOPOS;
	this->endPos = $Position::NOPOS;
}

void CRTable$SourceRange::init$(int32_t startPos, int32_t endPos) {
	this->startPos = startPos;
	this->endPos = endPos;
}

CRTable$SourceRange* CRTable$SourceRange::mergeWith(CRTable$SourceRange* sr) {
	if (sr == nullptr) {
		return this;
	}
	if (this->startPos == $Position::NOPOS) {
		this->startPos = $nc(sr)->startPos;
	} else if ($nc(sr)->startPos != $Position::NOPOS) {
		this->startPos = (this->startPos < sr->startPos ? this->startPos : sr->startPos);
	}
	if (this->endPos == $Position::NOPOS) {
		this->endPos = $nc(sr)->endPos;
	} else if ($nc(sr)->endPos != $Position::NOPOS) {
		this->endPos = (this->endPos > sr->endPos ? this->endPos : sr->endPos);
	}
	return this;
}

CRTable$SourceRange::CRTable$SourceRange() {
}

$Class* CRTable$SourceRange::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"startPos", "I", nullptr, 0, $field(CRTable$SourceRange, startPos)},
		{"endPos", "I", nullptr, 0, $field(CRTable$SourceRange, endPos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CRTable$SourceRange, init$, void)},
		{"<init>", "(II)V", nullptr, 0, $method(CRTable$SourceRange, init$, void, int32_t, int32_t)},
		{"mergeWith", "(Lcom/sun/tools/javac/jvm/CRTable$SourceRange;)Lcom/sun/tools/javac/jvm/CRTable$SourceRange;", nullptr, 0, $virtualMethod(CRTable$SourceRange, mergeWith, CRTable$SourceRange*, CRTable$SourceRange*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.CRTable$SourceRange", "com.sun.tools.javac.jvm.CRTable", "SourceRange", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.CRTable$SourceRange",
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
		"com.sun.tools.javac.jvm.CRTable"
	};
	$loadClass(CRTable$SourceRange, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CRTable$SourceRange);
	});
	return class$;
}

$Class* CRTable$SourceRange::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com