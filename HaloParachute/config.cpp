/*
	CfgFunctions.cpp

	Copyright 2016 Jan Babor

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

		http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.
*/


class HaloParachute
{
	tag = "HaloParachute";
	class Main
	{

		file = "SBG_xm8\HaloParachute\Functions";
		class ejectPlayer {};
		class parachutesafemode {};
		class pullParachute {};
		class showEject {};
		class showParachute {};
		class postInitHP {file = "SBG_xm8\HaloParachute\postInit.sqf"; postInit = 1;};
	};
};