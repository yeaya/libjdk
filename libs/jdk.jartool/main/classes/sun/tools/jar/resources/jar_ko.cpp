#include <sun/tools/jar/resources/jar_ko.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace tools {
		namespace jar {
			namespace resources {

$MethodInfo _jar_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(jar_ko::*)()>(&jar_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _jar_ko_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.tools.jar.resources.jar_ko",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_jar_ko_MethodInfo_
};

$Object* allocate$jar_ko($Class* clazz) {
	return $of($alloc(jar_ko));
}

void jar_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* jar_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("error.bad.cflag"_s),
			$of(u"\'c\' 플래그를 사용하려면 Manifest 또는 입력 파일을 지정해야 합니다!"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.dflag"_s),
			$of(u"\'-d, --describe-module\' 옵션에는 입력 파일을 지정할 필요가 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.eflag"_s),
			$of(u"\'e\' 플래그 및 Manifest를 \'Main-Class\' 속성과 함께 지정할 수\n없습니다!"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.file.arg"_s),
			$of(u"파일 인수 구문을 분석하는 중 오류가 발생했습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.option"_s),
			$of(u"-{ctxuid} 옵션 중 하나를 지정해야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.reason"_s),
			$of(u"잘못된 원인: {0}은(는) deprecated, deprecated-for-removal 또는 incubating 중 하나여야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.uflag"_s),
			$of(u"\'u\' 플래그를 사용하려면 Manifest, \'e\' 플래그 또는 입력 파일을 지정해야 합니다!"_s)
		}),
		$$new($ObjectArray, {
			$of("error.cant.open"_s),
			$of(u"열 수 없음: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.dir"_s),
			$of(u"{0}: 디렉토리를 생성할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.tempfile"_s),
			$of(u"임시 파일을 생성할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("error.hash.dep"_s),
			$of(u"모듈 {0} 종속성을 해시하는 중 모듈 경로에서 {1} 모듈을 찾을 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("error.illegal.option"_s),
			$of(u"잘못된 옵션: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.incorrect.length"_s),
			$of(u"처리 중 올바르지 않은 길이가 발견됨: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.invalid.versioned.module.attribute"_s),
			$of(u"부적합한 모듈 기술자 속성 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.arg"_s),
			$of(u"{0} 옵션에 인수가 필요합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.provider"_s),
			$of(u"서비스 제공자를 찾을 수 없음: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.descriptor.not.found"_s),
			$of(u"모듈 기술자를 찾을 수 없음"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.options.without.info"_s),
			$of(u"module-info.class 없이 --module-version 또는 --hash-modules 중 하나"_s)
		}),
		$$new($ObjectArray, {
			$of("error.multiple.main.operations"_s),
			$of(u"\'-cuxtid\' 옵션을 여러 개 지정할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.operative.descriptor"_s),
			$of(u"릴리스에 대한 작동 기술자 없음: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.root.descriptor"_s),
			$of(u"루트 모듈 기술자가 없습니다. --release를 지정하십시오."_s)
		}),
		$$new($ObjectArray, {
			$of("error.nosuch.fileordir"_s),
			$of(u"{0}: 해당 파일 또는 디렉토리가 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.unexpected.versioned.entry"_s),
			$of(u"{1} 릴리스에 대해 예상치 않은 버전이 지정된 항목 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.notnumber"_s),
			$of(u"릴리스 {0}이(가) 부적합함"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.toosmall"_s),
			$of(u"릴리스 {0}이(가) 부적합함. 9 이상이어야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("error.unable.derive.automodule"_s),
			$of(u"모듈 기술자를 파생할 수 없음: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unexpected.module-info"_s),
			$of(u"예상치 않은 모듈 기술자 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unrecognized.option"_s),
			$of(u"인식할 수 없는 옵션: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.bad.entry.name"_s),
			$of(u"항목 이름 형식이 잘못됨, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.different.api"_s),
			$of(u"{0} 항목에 이전 버전과 다른 api를 가진 클래스가 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.entryname.tooshort"_s),
			$of(u"항목 이름 {0}이(가) 너무 짧고 디렉토리가 아닙니다."_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.incompatible.class.version"_s),
			$of(u"{0} 항목에 이전 버전과 호환되지 않는 클래스 버전이 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.exports.notequal"_s),
			$of(u"버전 지정된 디렉토리의 module-info.class에 다른 \"exports\" 항목이 포함됨"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.manclass.notequal"_s),
			$of(u"{0}: 버전이 지정된 디렉토리의 module-info.class에 다른 \"main-class\" 항목이 포함됨"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.name.notequal"_s),
			$of(u"버전 지정된 디렉토리의 module-info.class에 잘못된 이름이 포함됨"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.opens.notequal"_s),
			$of(u"버전 지정된 디렉토리의 module-info.class에 다른 \"opens\" 항목이 포함됨"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.provides.notequal"_s),
			$of(u"버전 지정된 디렉토리의 module-info.class에 다른 \"provides\" 항목이 포함됨"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.added"_s),
			$of(u"버전 지정된 디렉토리의 module-info.class에 추가 \"requires\" 항목이 포함됨"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.dropped"_s),
			$of(u"버전 지정된 디렉토리의 module-info.class에 누락된 \"requires\" 항목이 포함됨"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.transitive"_s),
			$of(u"버전 지정된 디렉토리의 module-info.class에 추가 \"requires transitive\" 항목이 포함됨"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.version.notequal"_s),
			$of(u"{0}: 버전이 지정된 디렉토리의 module-info.class에 다른 \"version\" 항목이 포함됨"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.isolated.nested.class"_s),
			$of(u"{0} 항목은 분리된 중첩 클래스입니다."_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.exception"_s),
			$of(u"{0}을(를) 검증할 수 없음: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.invalid"_s),
			$of(u"부적합한 다중 릴리스 jar 파일 {0}이(가) 삭제되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.names.mismatch"_s),
			$of(u"{0} 항목에 내부 이름 {1}을(를) 가진 클래스가 있지만 이름이 일치하지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.new.public.class"_s),
			$of(u"{0} 항목에 기본 항목에서 찾을 수 없는 새로운 공용 클래스가 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.version.notnumber"_s),
			$of(u"항목 이름 {0}에 버전 번호가 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("error.write.file"_s),
			$of(u"기존 jar 파일에 쓰는 중 오류가 발생했습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any"_s),
			$of(u" 모든 모드에서 적합한 작업 수정자:\n\n  -C DIR                     지정된 디렉토리로 변경하고 다음 파일을\n                             포함합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.file"_s),
			$of(u"  -f, --file=FILE            아카이브 파일 이름입니다. 생략할 경우 작업에 따라 \n                             stdin 또는 stdout이 사용됩니다.\n      --release VERSION      다음 모든 파일을 버전 지정된 jar 디렉토리\n                             (예: META-INF/versions/VERSION/)에 배치합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.verbose"_s),
			$of(u"  -v, --verbose              표준 출력에 상세 정보 출력을 생성합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create"_s),
			$of(u" 생성 모드에서만 적합한 작업 수정자:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.normalize"_s),
			$of(u"  -n, --normalize            생성 후 새 jar 아카이브에서 정보를\n                             정규화합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update"_s),
			$of(u" 생성 및 업데이트 모드에서만 적합한 작업 수정자:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.do-not-resolve-by-default"_s),
			$of(u"      --do-not-resolve-by-default  모듈의 기본 루트 집합에서 제외합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.hash-modules"_s),
			$of(u"      --hash-modules=PATTERN 생성 중인 모듈형 jar 또는 업데이트 중인 비모듈 jar에 \n                             직접 또는 간접적으로 의존하고 주어진 패턴과 일치하는\n                             모듈의 해시를 컴퓨트하고\n                             기록합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index"_s),
			$of(u" 생성, 업데이트 및 generate-index 모드에서만 적합한 작업 수정자:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index.no-compress"_s),
			$of(u"  -0, --no-compress          저장 전용이며 ZIP 압축을 사용하지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.main-class"_s),
			$of(u"  -e, --main-class=CLASSNAME 모듈형 또는 실행형 jar 아카이브에 번들로\n                             제공된 독립형 애플리케이션의 애플리케이션\n                             시작 지점입니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.manifest"_s),
			$of(u"  -m, --manifest=FILE        지정된 Manifest 파일의 Manifest 정보를\n                             포함합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-path"_s),
			$of(u"  -p, --module-path          해시를 생성하기 위한 모듈 종속성의\n                             위치입니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-version"_s),
			$of(u"      --module-version=VERSION    모듈형 jar를 생성하거나 비모듈 jar를\n                             업데이트할 때 모듈 버전입니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.no-manifest"_s),
			$of(u"  -M, --no-manifest          항목에 대해 Manifest 파일을 생성하지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.warn-if-resolved"_s),
			$of(u"      --warn-if-resolved     모듈이 해결된 경우 경고를 실행할 툴에 대한\n                             힌트로, deprecated, deprecated-for-removal,\n                             또는 incubating 중 하나입니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main"_s),
			$of(u" 기본 작업 모드:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.create"_s),
			$of(u"  -c, --create               아카이브를 생성합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.describe-module"_s),
			$of(u"  -d, --describe-module      모듈 기술자 또는 자동 모듈 이름을 인쇄합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.extract"_s),
			$of(u"  -x, --extract              명명된(또는 모든) 파일을 아카이브에서 추출합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.generate-index"_s),
			$of(u"  -i, --generate-index=FILE  지정된 jar 아카이브에 대한 인덱스 정보를\n                             생성합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.list"_s),
			$of(u"  -t, --list                 아카이브에 대한 목차를 나열합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.update"_s),
			$of(u"  -u, --update               기존 jar 아카이브를 업데이트합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other"_s),
			$of(u" 기타 옵션:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help"_s),
			$of(u"  -h, --help[:compat]        이 도움말(또는 선택적으로 호환성)을 제공합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help-extra"_s),
			$of(u"      --help-extra           추가 옵션에 대한 도움말을 제공합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.version"_s),
			$of(u"      --version              프로그램 버전을 인쇄합니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.postopt"_s),
			$of(u" 아카이브는 모듈 기술자 \'module-info.class\'가 주어진 디렉토리의\n 루트 또는 jar 아카이브 자체의 루트에 위치한 경우 모듈형 jar입니다.\n 다음 작업은 모듈형 jar를 생성하거나 기존 비모듈 jar를\n 업데이트할 때만 적합합니다. \'--module-version\',\n \'--hash-modules\' 및 \'--module-path\'.\n\n long 옵션의 필수 또는 선택적 인수는 해당하는 short 옵션에 대해서도\n 필수 또는 선택적입니다."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.preopt"_s),
			$of(u"사용법: jar [OPTION...] [ [--release VERSION] [-C dir] 파일] ...\njar는 클래스 및 리소스에 대한 아카이브를 생성합니다. 아카이브에서\n개별 클래스나 리소스를 조작하거나 복원할 수 있습니다.\n\n 예제:\n # 두 클래스 파일을 사용하여 classes.jar라는 아카이브 생성:\n jar --create --file classes.jar Foo.class Bar.class\n # 기존 Manifest를 사용하여 모든 파일이 foo/에 포함된 아카이브 생성:\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # 모듈 기술자가 classes/module-info.class에 위치한\n # 모듈형 jar 아카이브 생성:\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # 기존 비모듈 jar를 모듈형 jar로 업데이트:\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # 일부 파일이 META-INF/versions/9 디렉토리에 위치한 다중 릴리스 jar 생성:\n jar --create --file mr.jar -C foo classes --release 9 -C foo9 classes\n\njar 명령을 짧게 만들거나 단순화하려면 별도의 텍스트 파일에 인수를 지정하고\nat 기호(@)를 접두어로 사용하여 jar 명령에 전달할 수 있습니다.\n\n 예제:\n # classes.list 파일에서 추가 옵션 및 클래스 파일 목록 읽기\n jar --create --file my.jar @classes.list\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary"_s),
			$of(u"사용법: jar [OPTION...] [ [--release VERSION] [-C dir] files] ..."_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary.try"_s),
			$of(u"자세한 내용을 보려면 \'jar --help\'를 실행하십시오."_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.manifest"_s),
			$of(u"Manifest를 추가함"_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.module-info"_s),
			$of(u"추가된 모듈 정보: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.adding"_s),
			$of(u"추가하는 중: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.automodule"_s),
			$of(u"모듈 기술자를 찾을 수 없습니다. 자동 모듈을 파생했습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("out.create"_s),
			$of(u"  생성됨: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.deflated"_s),
			$of(u"({0}%를 감소함)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.extracted"_s),
			$of(u"추출됨: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.ignore.entry"_s),
			$of(u"{0} 항목을 무시하는 중"_s)
		}),
		$$new($ObjectArray, {
			$of("out.inflated"_s),
			$of(u" 증가됨: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.size"_s),
			$of(u"(입력 = {0}) (출력 = {1})"_s)
		}),
		$$new($ObjectArray, {
			$of("out.stored"_s),
			$of(u"(0%를 저장함)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.manifest"_s),
			$of(u"Manifest를 업데이트함"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.module-info"_s),
			$of(u"업데이트된 모듈 정보: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("usage.compat"_s),
			$of(u"호환성 인터페이스:\n사용법: jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] files ...\n옵션:\n    -c  새 아카이브를 생성합니다.\n    -t  아카이브에 대한 목차를 나열합니다.\n    -x  명명된(또는 모든) 파일을 아카이브에서 추출합니다.\n    -u  기존 아카이브를 업데이트합니다.\n    -v  표준 출력에 상세 정보 출력을 생성합니다.\n    -f  아카이브 파일 이름을 지정합니다.\n    -m  지정된 Manifest 파일의 Manifest 정보를 포함합니다.\n    -n  새 아카이브를 생성한 후 Pack200 정규화를 수행합니다.\n    -e  jar 실행 파일에 번들로 제공된 독립형 애플리케이션의 \n        애플리케이션 시작 지점을 지정합니다.\n    -0  저장 전용이며 ZIP 압축을 사용하지 않습니다.\n    -P  파일 이름에서 선행 \'/\'(절대 경로) 및 \"..\"(상위 디렉토리) 구성요소를 유지합니다.\n    -M  항목에 대해 Manifest 파일을 생성하지 않습니다.\n    -i  지정된 jar 파일에 대한 인덱스 정보를 생성합니다.\n    -C  지정된 디렉토리로 변경하고 다음 파일을 포함합니다.\n특정 파일이 디렉토리일 경우 순환적으로 처리됩니다.\nManifest 파일 이름, 아카이브 파일 이름 및 시작 지점 이름은\n\'m\', \'f\' 및 \'e\' 플래그와 동일한 순서로 지정됩니다.\n\n예 1: classes.jar라는 아카이브에 두 클래스 파일을 아카이브하는 방법: \n       jar cvf classes.jar Foo.class Bar.class \n예 2: 기존 Manifest 파일 \'mymanifest\'를 사용하여\n           foo/ 디렉토리의 모든 파일을 \'classes.jar\'로 아카이브하는 방법: \n       jar cvfm classes.jar mymanifest -C foo/ .\n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.release.unexpected.versioned.entry"_s),
			$of(u"예상치 않은 버전이 지정된 항목 {0}입니다."_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.concealed.public.class"_s),
			$of(u"경고: {0} 항목은 숨겨진 패키지에 있는\n공용 클래스입니다. 이 jar을 클래스 경로에 배치하면\n공용 인터페이스가 호환되지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.identical.entry"_s),
			$of(u"경고: {0} 항목에 이미 jar에 있는 항목과\n동일한 클래스가 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.resources.with.same.name"_s),
			$of(u"경고: {0} 항목에 동일한 이름의 여러 리소스가 있습니다."_s)
		})
	});
}

jar_ko::jar_ko() {
}

$Class* jar_ko::load$($String* name, bool initialize) {
	$loadClass(jar_ko, name, initialize, &_jar_ko_ClassInfo_, allocate$jar_ko);
	return class$;
}

$Class* jar_ko::class$ = nullptr;

			} // resources
		} // jar
	} // tools
} // sun