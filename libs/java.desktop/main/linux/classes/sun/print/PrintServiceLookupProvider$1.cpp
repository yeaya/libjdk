#include <sun/print/PrintServiceLookupProvider$1.h>
#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/FileReader.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/util/ArrayList.h>
#include <sun/print/PrintServiceLookupProvider.h>
#include <jcpp.h>

using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $FileReader = ::java::io::FileReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;
using $Files = ::java::nio::file::Files;
using $ArrayList = ::java::util::ArrayList;

namespace sun {
	namespace print {

void PrintServiceLookupProvider$1::init$($StringArray* val$cmd) {
	$set(this, val$cmd, val$cmd);
}

$Object* PrintServiceLookupProvider$1::run() {
	$useLocalObjectStack();
	$var($Process, proc, nullptr);
	$var($BufferedReader, bufferedReader, nullptr);
	$var($File, f, $$nc($Files::createTempFile("prn"_s, "xc"_s, $$new($FileAttributeArray, 0)))->toFile());
	$nc(this->val$cmd)->set(2, $$str({$nc(this->val$cmd)->get(2), ">"_s, $($nc(f)->getAbsolutePath())}));
	$assign(proc, $$nc($Runtime::getRuntime())->exec(this->val$cmd));
	$var($Throwable, var$0, nullptr);
	$var($Object, var$2, nullptr);
	bool return$1 = false;
	try {
		bool done = false;
		while (!done) {
			try {
				$nc(proc)->waitFor();
				done = true;
			} catch ($InterruptedException& e) {
			}
		}
		if ($nc(proc)->exitValue() == 0) {
			$var($FileReader, reader, $new($FileReader, f));
			$assign(bufferedReader, $new($BufferedReader, reader));
			$var($String, line, nullptr);
			$var($ArrayList, results, $new($ArrayList));
			while (($assign(line, bufferedReader->readLine())) != nullptr) {
				results->add(line);
			}
			$assign(var$2, results);
			return$1 = true;
			goto $finally;
		}
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		f->delete$();
		if (bufferedReader != nullptr) {
			bufferedReader->close();
		}
		$$nc($nc(proc)->getInputStream())->close();
		$$nc(proc->getErrorStream())->close();
		$$nc(proc->getOutputStream())->close();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	return nullptr;
}

PrintServiceLookupProvider$1::PrintServiceLookupProvider$1() {
}

$Class* PrintServiceLookupProvider$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$cmd", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(PrintServiceLookupProvider$1, val$cmd)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/String;)V", "()V", 0, $method(PrintServiceLookupProvider$1, init$, void, $StringArray*)},
		{"run", "()Ljava/util/ArrayList;", "()Ljava/util/ArrayList<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(PrintServiceLookupProvider$1, run, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.print.PrintServiceLookupProvider",
		"execCmd",
		"(Ljava/lang/String;)[Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.print.PrintServiceLookupProvider$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.print.PrintServiceLookupProvider$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/util/ArrayList<Ljava/lang/String;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.print.PrintServiceLookupProvider"
	};
	$loadClass(PrintServiceLookupProvider$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintServiceLookupProvider$1);
	});
	return class$;
}

$Class* PrintServiceLookupProvider$1::class$ = nullptr;

	} // print
} // sun