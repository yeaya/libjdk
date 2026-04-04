#include <FormatLocale.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/List.h>
#include <java/util/Locale$Category.h>
#include <java/util/Locale.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/stream/IntStream.h>
#include <jcpp.h>

#undef FORMAT
#undef FRANCE
#undef US

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Locale$Category = ::java::util::Locale$Category;
using $IntConsumer = ::java::util::function::IntConsumer;
using $IntStream = ::java::util::stream::IntStream;

class FormatLocale$$Lambda$lambda$main$0 : public $IntConsumer {
	$class(FormatLocale$$Lambda$lambda$main$0, $NO_CLASS_INIT, $IntConsumer)
public:
	void init$() {
	}
	virtual void accept(int32_t i) override {
		FormatLocale::lambda$main$0(i);
	}
};
$Class* FormatLocale$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatLocale$$Lambda$lambda$main$0, init$, void)},
		{"accept", "(I)V", nullptr, $PUBLIC, $virtualMethod(FormatLocale$$Lambda$lambda$main$0, accept, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"FormatLocale$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.util.function.IntConsumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatLocale$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatLocale$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* FormatLocale$$Lambda$lambda$main$0::class$ = nullptr;

float FormatLocale::src = 0.0;
$List* FormatLocale::formatLocale = nullptr;
$List* FormatLocale::expected = nullptr;

void FormatLocale::init$() {
}

void FormatLocale::main($StringArray* args) {
	$init(FormatLocale);
	$useLocalObjectStack();
	$$nc($IntStream::range(0, $nc(FormatLocale::formatLocale)->size()))->forEach($$new(FormatLocale$$Lambda$lambda$main$0));
}

void FormatLocale::lambda$main$0(int32_t i) {
	$init(FormatLocale);
	$useLocalObjectStack();
	$init($Locale$Category);
	$Locale::setDefault($Locale$Category::FORMAT, $$cast($Locale, $nc(FormatLocale::formatLocale)->get(i)));
	$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
	$$new($PrintStream, baos)->format("%.2f"_s, $$new($ObjectArray, {$($Float::valueOf(FormatLocale::src))}));
	if (!$$nc(baos->toString())->equals($($nc(FormatLocale::expected)->get(i)))) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Wrong conversion with PrintStream.format() in locale "_s);
		var$0->append($(FormatLocale::formatLocale->get(i)));
		var$0->append(". Expected: "_s);
		var$0->append($$cast($String, FormatLocale::expected->get(i)));
		var$0->append(" Returned: "_s);
		var$0->append($(baos->toString()));
		$throwNew($RuntimeException, $$str(var$0));
	}
}

void FormatLocale::clinit$($Class* clazz) {
	FormatLocale::src = 3.14f;
	$init($Locale);
	$assignStatic(FormatLocale::formatLocale, $List::of($Locale::US, $Locale::FRANCE));
	$assignStatic(FormatLocale::expected, $List::of("3.14"_s, "3,14"_s));
}

FormatLocale::FormatLocale() {
}

$Class* FormatLocale::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("FormatLocale$$Lambda$lambda$main$0")) {
			return FormatLocale$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"src", "F", nullptr, $STATIC | $FINAL, $staticField(FormatLocale, src)},
		{"formatLocale", "Ljava/util/List;", "Ljava/util/List<Ljava/util/Locale;>;", $STATIC | $FINAL, $staticField(FormatLocale, formatLocale)},
		{"expected", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $STATIC | $FINAL, $staticField(FormatLocale, expected)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatLocale, init$, void)},
		{"lambda$main$0", "(I)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FormatLocale, lambda$main$0, void, int32_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FormatLocale, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"FormatLocale",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FormatLocale, name, initialize, &classInfo$$, FormatLocale::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FormatLocale);
	});
	return class$;
}

$Class* FormatLocale::class$ = nullptr;