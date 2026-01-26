#include <sun/tools/jar/CommandLine.h>

#include <java/io/BufferedReader.h>
#include <java/io/FileReader.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/io/StreamTokenizer.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef TT_EOF

using $BufferedReader = ::java::io::BufferedReader;
using $FileReader = ::java::io::FileReader;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $StreamTokenizer = ::java::io::StreamTokenizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace sun {
	namespace tools {
		namespace jar {

$MethodInfo _CommandLine_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CommandLine, init$, void)},
	{"loadCmdFile", "(Ljava/lang/String;Ljava/util/List;)V", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)V", $PRIVATE | $STATIC, $staticMethod(CommandLine, loadCmdFile, void, $String*, $List*), "java.io.IOException"},
	{"parse", "([Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(CommandLine, parse, $StringArray*, $StringArray*), "java.io.IOException"},
	{}
};

$ClassInfo _CommandLine_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.tools.jar.CommandLine",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CommandLine_MethodInfo_
};

$Object* allocate$CommandLine($Class* clazz) {
	return $of($alloc(CommandLine));
}

void CommandLine::init$() {
}

$StringArray* CommandLine::parse($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($List, newArgs, $new($ArrayList, $nc(args)->length));
	for (int32_t i = 0; i < $nc(args)->length; ++i) {
		$var($String, arg, args->get(i));
		bool var$0 = $nc(arg)->length() > 1;
		if (var$0 && arg->charAt(0) == u'@') {
			$assign(arg, arg->substring(1));
			if (arg->charAt(0) == u'@') {
				newArgs->add(arg);
			} else {
				loadCmdFile(arg, newArgs);
			}
		} else {
			newArgs->add(arg);
		}
	}
	return $fcast($StringArray, newArgs->toArray($$new($StringArray, newArgs->size())));
}

void CommandLine::loadCmdFile($String* name, $List* args) {
	$useLocalCurrentObjectStackCache();
	$var($Reader, r, $new($BufferedReader, $$new($FileReader, name)));
	$var($StreamTokenizer, st, $new($StreamTokenizer, r));
	st->resetSyntax();
	st->wordChars(u' ', 255);
	st->whitespaceChars(0, u' ');
	st->commentChar(u'#');
	st->quoteChar(u'\"');
	st->quoteChar(u'\'');
	while (st->nextToken() != $StreamTokenizer::TT_EOF) {
		$nc(args)->add(st->sval);
	}
	r->close();
}

CommandLine::CommandLine() {
}

$Class* CommandLine::load$($String* name, bool initialize) {
	$loadClass(CommandLine, name, initialize, &_CommandLine_ClassInfo_, allocate$CommandLine);
	return class$;
}

$Class* CommandLine::class$ = nullptr;

		} // jar
	} // tools
} // sun