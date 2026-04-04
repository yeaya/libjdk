#include <sun/print/OpenBook.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Pageable.h>
#include <java/awt/print/Printable.h>
#include <jcpp.h>

#undef UNKNOWN_NUMBER_OF_PAGES

using $PageFormat = ::java::awt::print::PageFormat;
using $Pageable = ::java::awt::print::Pageable;
using $Printable = ::java::awt::print::Printable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace print {

void OpenBook::init$($PageFormat* format, $Printable* painter) {
	$set(this, mFormat, format);
	$set(this, mPainter, painter);
}

int32_t OpenBook::getNumberOfPages() {
	return $Pageable::UNKNOWN_NUMBER_OF_PAGES;
}

$PageFormat* OpenBook::getPageFormat(int32_t pageIndex) {
	return this->mFormat;
}

$Printable* OpenBook::getPrintable(int32_t pageIndex) {
	return this->mPainter;
}

OpenBook::OpenBook() {
}

$Class* OpenBook::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mFormat", "Ljava/awt/print/PageFormat;", nullptr, $PRIVATE, $field(OpenBook, mFormat)},
		{"mPainter", "Ljava/awt/print/Printable;", nullptr, $PRIVATE, $field(OpenBook, mPainter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/print/PageFormat;Ljava/awt/print/Printable;)V", nullptr, 0, $method(OpenBook, init$, void, $PageFormat*, $Printable*)},
		{"getNumberOfPages", "()I", nullptr, $PUBLIC, $virtualMethod(OpenBook, getNumberOfPages, int32_t)},
		{"getPageFormat", "(I)Ljava/awt/print/PageFormat;", nullptr, $PUBLIC, $virtualMethod(OpenBook, getPageFormat, $PageFormat*, int32_t)},
		{"getPrintable", "(I)Ljava/awt/print/Printable;", nullptr, $PUBLIC, $virtualMethod(OpenBook, getPrintable, $Printable*, int32_t), "java.lang.IndexOutOfBoundsException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.OpenBook",
		"java.lang.Object",
		"java.awt.print.Pageable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OpenBook, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OpenBook);
	});
	return class$;
}

$Class* OpenBook::class$ = nullptr;

	} // print
} // sun