#include <sun/print/PageableDoc.h>
#include <java/awt/print/Pageable.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <javax/print/DocFlavor$SERVICE_FORMATTED.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/attribute/DocAttributeSet.h>
#include <javax/print/attribute/HashDocAttributeSet.h>
#include <jcpp.h>

#undef PAGEABLE

using $Pageable = ::java::awt::print::Pageable;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocFlavor = ::javax::print::DocFlavor;
using $DocFlavor$SERVICE_FORMATTED = ::javax::print::DocFlavor$SERVICE_FORMATTED;
using $DocAttributeSet = ::javax::print::attribute::DocAttributeSet;
using $HashDocAttributeSet = ::javax::print::attribute::HashDocAttributeSet;

namespace sun {
	namespace print {

void PageableDoc::init$($Pageable* pageable) {
	$set(this, pageable, pageable);
}

$DocFlavor* PageableDoc::getDocFlavor() {
	$init($DocFlavor$SERVICE_FORMATTED);
	return $DocFlavor$SERVICE_FORMATTED::PAGEABLE;
}

$DocAttributeSet* PageableDoc::getAttributes() {
	return $new($HashDocAttributeSet);
}

$Object* PageableDoc::getPrintData() {
	return this->pageable;
}

$Reader* PageableDoc::getReaderForText() {
	return nullptr;
}

$InputStream* PageableDoc::getStreamForBytes() {
	return nullptr;
}

PageableDoc::PageableDoc() {
}

$Class* PageableDoc::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pageable", "Ljava/awt/print/Pageable;", nullptr, $PRIVATE, $field(PageableDoc, pageable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/print/Pageable;)V", nullptr, $PUBLIC, $method(PageableDoc, init$, void, $Pageable*)},
		{"getAttributes", "()Ljavax/print/attribute/DocAttributeSet;", nullptr, $PUBLIC, $virtualMethod(PageableDoc, getAttributes, $DocAttributeSet*)},
		{"getDocFlavor", "()Ljavax/print/DocFlavor;", nullptr, $PUBLIC, $virtualMethod(PageableDoc, getDocFlavor, $DocFlavor*)},
		{"getPrintData", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PageableDoc, getPrintData, $Object*), "java.io.IOException"},
		{"getReaderForText", "()Ljava/io/Reader;", nullptr, $PUBLIC, $virtualMethod(PageableDoc, getReaderForText, $Reader*), "java.io.UnsupportedEncodingException,java.io.IOException"},
		{"getStreamForBytes", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(PageableDoc, getStreamForBytes, $InputStream*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.print.PageableDoc",
		"java.lang.Object",
		"javax.print.Doc",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PageableDoc, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PageableDoc);
	});
	return class$;
}

$Class* PageableDoc::class$ = nullptr;

	} // print
} // sun