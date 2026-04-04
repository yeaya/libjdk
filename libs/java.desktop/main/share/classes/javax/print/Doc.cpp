#include <javax/print/Doc.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/attribute/DocAttributeSet.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocFlavor = ::javax::print::DocFlavor;
using $DocAttributeSet = ::javax::print::attribute::DocAttributeSet;

namespace javax {
	namespace print {

$Class* Doc::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAttributes", "()Ljavax/print/attribute/DocAttributeSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Doc, getAttributes, $DocAttributeSet*)},
		{"getDocFlavor", "()Ljavax/print/DocFlavor;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Doc, getDocFlavor, $DocFlavor*)},
		{"getPrintData", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Doc, getPrintData, $Object*), "java.io.IOException"},
		{"getReaderForText", "()Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Doc, getReaderForText, $Reader*), "java.io.IOException"},
		{"getStreamForBytes", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Doc, getStreamForBytes, $InputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.print.Doc",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Doc, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Doc);
	});
	return class$;
}

$Class* Doc::class$ = nullptr;

	} // print
} // javax