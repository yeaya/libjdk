#include <com/sun/tools/javac/parser/ScannerFactory.h>
#include <com/sun/tools/javac/code/Lint.h>
#include <com/sun/tools/javac/code/Preview.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/parser/JavadocTokenizer.h>
#include <com/sun/tools/javac/parser/Scanner.h>
#include <com/sun/tools/javac/parser/Tokens.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/lang/CharSequence.h>
#include <java/nio/CharBuffer.h>
#include <jcpp.h>

using $Lint = ::com::sun::tools::javac::code::Lint;
using $Preview = ::com::sun::tools::javac::code::Preview;
using $Source = ::com::sun::tools::javac::code::Source;
using $JavadocTokenizer = ::com::sun::tools::javac::parser::JavadocTokenizer;
using $Scanner = ::com::sun::tools::javac::parser::Scanner;
using $Tokens = ::com::sun::tools::javac::parser::Tokens;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Log = ::com::sun::tools::javac::util::Log;
using $Names = ::com::sun::tools::javac::util::Names;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharBuffer = ::java::nio::CharBuffer;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

$Context$Key* ScannerFactory::scannerFactoryKey = nullptr;

ScannerFactory* ScannerFactory::instance($Context* context) {
	$init(ScannerFactory);
	$var(ScannerFactory, instance, $cast(ScannerFactory, $nc(context)->get(ScannerFactory::scannerFactoryKey)));
	if (instance == nullptr) {
		$assign(instance, $new(ScannerFactory, context));
	}
	return instance;
}

void ScannerFactory::init$($Context* context) {
	$nc(context)->put(ScannerFactory::scannerFactoryKey, this);
	$set(this, log, $Log::instance(context));
	$set(this, names, $Names::instance(context));
	$set(this, source, $Source::instance(context));
	$set(this, preview, $Preview::instance(context));
	$set(this, tokens, $Tokens::instance(context));
	$set(this, lint, $Lint::instance(context));
}

$Scanner* ScannerFactory::newScanner($CharSequence* input, bool keepDocComments) {
	$useLocalObjectStack();
	{
		$var($CharBuffer, charBuffer, nullptr);
		bool var$0 = $instanceOf($CharBuffer, input);
		if (var$0) {
			$assign(charBuffer, $cast($CharBuffer, input));
			var$0 = true;
		}
		if (var$0) {
			if (keepDocComments) {
				return $new($Scanner, this, $$new($JavadocTokenizer, this, charBuffer));
			} else {
				return $new($Scanner, this, charBuffer);
			}
		} else {
			$var($chars, array, $$nc($nc(input)->toString())->toCharArray());
			return newScanner(array, array->length, keepDocComments);
		}
	}
}

$Scanner* ScannerFactory::newScanner($chars* input, int32_t inputLength, bool keepDocComments) {
	if (keepDocComments) {
		return $new($Scanner, this, $$new($JavadocTokenizer, this, input, inputLength));
	} else {
		return $new($Scanner, this, input, inputLength);
	}
}

void ScannerFactory::clinit$($Class* clazz) {
	$assignStatic(ScannerFactory::scannerFactoryKey, $new($Context$Key));
}

ScannerFactory::ScannerFactory() {
}

$Class* ScannerFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"scannerFactoryKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/parser/ScannerFactory;>;", $PUBLIC | $STATIC | $FINAL, $staticField(ScannerFactory, scannerFactoryKey)},
		{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $FINAL, $field(ScannerFactory, log)},
		{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $FINAL, $field(ScannerFactory, names)},
		{"source", "Lcom/sun/tools/javac/code/Source;", nullptr, $FINAL, $field(ScannerFactory, source)},
		{"preview", "Lcom/sun/tools/javac/code/Preview;", nullptr, $FINAL, $field(ScannerFactory, preview)},
		{"tokens", "Lcom/sun/tools/javac/parser/Tokens;", nullptr, $FINAL, $field(ScannerFactory, tokens)},
		{"lint", "Lcom/sun/tools/javac/code/Lint;", nullptr, $FINAL, $field(ScannerFactory, lint)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(ScannerFactory, init$, void, $Context*)},
		{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/parser/ScannerFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(ScannerFactory, instance, ScannerFactory*, $Context*)},
		{"newScanner", "(Ljava/lang/CharSequence;Z)Lcom/sun/tools/javac/parser/Scanner;", nullptr, $PUBLIC, $virtualMethod(ScannerFactory, newScanner, $Scanner*, $CharSequence*, bool)},
		{"newScanner", "([CIZ)Lcom/sun/tools/javac/parser/Scanner;", nullptr, $PUBLIC, $virtualMethod(ScannerFactory, newScanner, $Scanner*, $chars*, int32_t, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.parser.ScannerFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ScannerFactory, name, initialize, &classInfo$$, ScannerFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ScannerFactory);
	});
	return class$;
}

$Class* ScannerFactory::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com