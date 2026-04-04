#include <javax/annotation/processing/Filer.h>
#include <java/lang/CharSequence.h>
#include <javax/lang/model/element/Element.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $ElementArray = $Array<::javax::lang::model::element::Element>;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace javax {
	namespace annotation {
		namespace processing {

$Class* Filer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createClassFile", "(Ljava/lang/CharSequence;[Ljavax/lang/model/element/Element;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(Filer, createClassFile, $JavaFileObject*, $CharSequence*, $ElementArray*), "java.io.IOException"},
		{"createResource", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/CharSequence;Ljava/lang/CharSequence;[Ljavax/lang/model/element/Element;)Ljavax/tools/FileObject;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(Filer, createResource, $FileObject*, $JavaFileManager$Location*, $CharSequence*, $CharSequence*, $ElementArray*), "java.io.IOException"},
		{"createSourceFile", "(Ljava/lang/CharSequence;[Ljavax/lang/model/element/Element;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(Filer, createSourceFile, $JavaFileObject*, $CharSequence*, $ElementArray*), "java.io.IOException"},
		{"getResource", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljavax/tools/FileObject;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Filer, getResource, $FileObject*, $JavaFileManager$Location*, $CharSequence*, $CharSequence*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.annotation.processing.Filer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Filer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Filer);
	});
	return class$;
}

$Class* Filer::class$ = nullptr;

		} // processing
	} // annotation
} // javax