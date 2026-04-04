#include <java/awt/print/Book$BookPage.h>
#include <java/awt/print/Book.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <jcpp.h>

using $Book = ::java::awt::print::Book;
using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace awt {
		namespace print {

void Book$BookPage::init$($Book* this$0, $Printable* painter, $PageFormat* format) {
	$set(this, this$0, this$0);
	if (painter == nullptr || format == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, mFormat, format);
	$set(this, mPainter, painter);
}

$Printable* Book$BookPage::getPrintable() {
	return this->mPainter;
}

$PageFormat* Book$BookPage::getPageFormat() {
	return this->mFormat;
}

Book$BookPage::Book$BookPage() {
}

$Class* Book$BookPage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/print/Book;", nullptr, $FINAL | $SYNTHETIC, $field(Book$BookPage, this$0)},
		{"mFormat", "Ljava/awt/print/PageFormat;", nullptr, $PRIVATE, $field(Book$BookPage, mFormat)},
		{"mPainter", "Ljava/awt/print/Printable;", nullptr, $PRIVATE, $field(Book$BookPage, mPainter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/print/Book;Ljava/awt/print/Printable;Ljava/awt/print/PageFormat;)V", nullptr, 0, $method(Book$BookPage, init$, void, $Book*, $Printable*, $PageFormat*)},
		{"getPageFormat", "()Ljava/awt/print/PageFormat;", nullptr, 0, $virtualMethod(Book$BookPage, getPageFormat, $PageFormat*)},
		{"getPrintable", "()Ljava/awt/print/Printable;", nullptr, 0, $virtualMethod(Book$BookPage, getPrintable, $Printable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.print.Book$BookPage", "java.awt.print.Book", "BookPage", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.print.Book$BookPage",
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
		"java.awt.print.Book"
	};
	$loadClass(Book$BookPage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Book$BookPage);
	});
	return class$;
}

$Class* Book$BookPage::class$ = nullptr;

		} // print
	} // awt
} // java