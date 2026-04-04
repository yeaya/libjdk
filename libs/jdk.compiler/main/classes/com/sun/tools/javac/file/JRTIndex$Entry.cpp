#include <com/sun/tools/javac/file/JRTIndex$Entry.h>
#include <com/sun/tools/javac/file/JRTIndex$CtSym.h>
#include <com/sun/tools/javac/file/JRTIndex.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $JRTIndex = ::com::sun::tools::javac::file::JRTIndex;
using $JRTIndex$CtSym = ::com::sun::tools::javac::file::JRTIndex$CtSym;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

void JRTIndex$Entry::init$($JRTIndex* this$0, $Map* files, $Set* subdirs, $JRTIndex$CtSym* ctSym) {
	$set(this, this$0, this$0);
	$set(this, files, files);
	$set(this, subdirs, subdirs);
	$set(this, ctSym, ctSym);
}

JRTIndex$Entry::JRTIndex$Entry() {
}

$Class* JRTIndex$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/file/JRTIndex;", nullptr, $FINAL | $SYNTHETIC, $field(JRTIndex$Entry, this$0)},
		{"files", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/nio/file/Path;>;", $FINAL, $field(JRTIndex$Entry, files)},
		{"subdirs", "Ljava/util/Set;", "Ljava/util/Set<Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;>;", $FINAL, $field(JRTIndex$Entry, subdirs)},
		{"ctSym", "Lcom/sun/tools/javac/file/JRTIndex$CtSym;", nullptr, $FINAL, $field(JRTIndex$Entry, ctSym)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/file/JRTIndex;Ljava/util/Map;Ljava/util/Set;Lcom/sun/tools/javac/file/JRTIndex$CtSym;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/nio/file/Path;>;Ljava/util/Set<Lcom/sun/tools/javac/file/RelativePath$RelativeDirectory;>;Lcom/sun/tools/javac/file/JRTIndex$CtSym;)V", $PRIVATE, $method(JRTIndex$Entry, init$, void, $JRTIndex*, $Map*, $Set*, $JRTIndex$CtSym*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.file.JRTIndex$Entry", "com.sun.tools.javac.file.JRTIndex", "Entry", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.file.JRTIndex$Entry",
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
	$loadClass(JRTIndex$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JRTIndex$Entry);
	});
	return class$;
}

$Class* JRTIndex$Entry::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com