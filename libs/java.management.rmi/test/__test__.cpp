#include <java.management.rmi.test.h>

#include <jcpp.h>

class TestCases : public $Object {
public:
	TestCases() {}
	void init$($StringArray* args) {
		$Object::init$();
		$set(this, casesArgs, args);
	}

	bool isListAction() {
		for (int32_t i = 0; i < casesArgs->length; i++) {
			$String* arg = $arrayGet($String, casesArgs, i);
			if ("-l"_s->equals(arg) || "--list"_s->equals(arg)) {
				return true;
			}
		}
		return false;
	}

	bool isSelectedOne() {
		bool exitsInclude = false;
		for (int32_t i = 0; i < casesArgs->length; i++) {
			$String* arg = $arrayGet($String, casesArgs, i);
			if ("-l"_s->equals(arg) || "--list"_s->equals(arg)) {
				continue;
			} else if ("--include"_s->equals(arg)) {
				return false;
			} else if ("--exclude"_s->equals(arg)) {
				return false;
			} else {
				return true;
			}
		}
		return false;
	}

	bool isSelected(const char* caseName, bool excludeFromAll) {
		bool exitsInclude = false;
		for (int32_t i = 0; i < casesArgs->length; i++) {
			$String* arg = $arrayGet($String, casesArgs, i);
			if ("-l"_s->equals(arg) || "--list"_s->equals(arg)) {
				continue;
			} else if ("--include"_s->equals(arg)) {
				i++;
				exitsInclude = true;
				if (i < casesArgs->length) {
					$String* include = $arrayGet($String, casesArgs, i);
					$var($StringArray, includeArray, include->split(","_s));
					for (int32_t j = 0; j < includeArray->length; j++) {
						$String* includeItem = $arrayGet<$String>(includeArray, j);
						if ($(includeItem->trim())->equals(caseName)) {
							return true;
						}
					}
				}
			} else if ("--exclude"_s->equals(arg)) {
				i++;
				if (i < casesArgs->length) {
					$String* exclude = $arrayGet($String, casesArgs, i);
					$var($StringArray, excludeArray, exclude->split(","_s));
					for (int32_t j = 0; j < excludeArray->length; j++) {
						$String* excludeItem = $arrayGet<$String>(excludeArray, j);
						if ($(excludeItem->trim())->equals(caseName)) {
							return false;
						}
					}
				}
			} else {
				exitsInclude = true;
				if (arg->equals(caseName)) {
					return true;
				}
			}
		}
		if (excludeFromAll) {
			return false;
		}
		return !exitsInclude;
	}

	template<typename T>
	void runCase(const char* caseName, bool excludeFromAll = false, $StringArray* args = nullptr) {
		if (isListAction()) {
			processedCount++;
			if (excludeFromAll) {
				$System::out->println($$str({ "#case "_s, $$str(processedCount), " "_s, $$str(caseName) }));
			} else {
				$System::out->println($$str({ "case "_s, $$str(processedCount), " "_s, $$str(caseName) }));
			}
		} else {
			if (isSelected(caseName, excludeFromAll)) {
				processedCount++;
				if (!isSelectedOne()) {
					$System::out->println($$str({ "case "_s, $$str(processedCount), " "_s, $$str(caseName) }));
				}
				int64_t beginMs = $System::currentTimeMillis();
				if (args != nullptr) {
					T::main(args);
				} else {
					T::main($$new($StringArray, 0));
				}
				int64_t endMs = $System::currentTimeMillis();
				$System::out->println($$str({ $$str(endMs - beginMs), "ms"_s }));
				if (!isSelectedOne()) {
					$System::out->println(""_s);
				}
			}
		}
	}

	template<typename T>
	void runCase(const char* caseName, $StringArray* args) {
		runCase<T>(caseName, false, args);
	}

	void runCases();
private:
	$StringArray* casesArgs = nullptr;
	int32_t processedCount = 0;
};

#define run(caseName, caseClass, ...) runCase<caseClass>(caseName, ##__VA_ARGS__);

void TestCases::runCases() {
	int64_t runCasesBeginMs = $System::currentTimeMillis();


	int64_t runCaseEndMs = $System::currentTimeMillis();
	if (processedCount > 1) {
		$System::out->println($$str({"runCases "_s, $$str(processedCount), " "_s, $$str(runCaseEndMs - runCasesBeginMs), "ms"_s}));
	}
	$System::out->flush();
}

#ifdef JCPP_SUBSYSTEM_WINDOWS
#include <windows.h>
int WINAPI WinMain(HINSTANCE inst, HINSTANCE previnst, LPSTR cmdline, int cmdshow) {
	return $System::launchwin("-$", ::java$management$rmi$test::init, []($StringArray* args)->void {
		$var(TestCases, testcases, $new(TestCases, args));
		testcases->runCases();
	});
}
#else
int main(int argc, char** argv) {
	return $System::launch(argc, argv, "-$", ::java$management$rmi$test::init, []($StringArray* args)->void {
		$var(TestCases, testcases, $new(TestCases, args));
		testcases->runCases();
	});
}
#endif