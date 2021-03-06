// Copyright (c) 2005-2011 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD/e, an XML Schema
// to C++ data binding compiler for embedded systems.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
//

// Begin prologue.
//
//
// End prologue.

#include "mega_schema-simpl.hxx"

#include <xsde/cxx/serializer/validating/string-common.hxx>

namespace megaxml
{
  // Package_simpl
  //

  void Package_simpl::
  pre (const ::megaxml::Package& x)
  {
    this->Package_simpl_state_.Package_ = &x;
    this->Package_simpl_state_.Command_ = 
    this->Package_simpl_state_.Package_->Command ().begin ();
    this->Package_simpl_state_.Command_end_ = 
    this->Package_simpl_state_.Package_->Command ().end ();
  }

  ::std::string Package_simpl::
  Type ()
  {
    return this->Package_simpl_state_.Package_->Type ();
  }

  bool Package_simpl::
  Directories_present ()
  {
    return this->Package_simpl_state_.Package_->Directories_present ();
  }

  const ::megaxml::Directories& Package_simpl::
  Directories ()
  {
    return this->Package_simpl_state_.Package_->Directories ();
  }

  bool Package_simpl::
  Files_present ()
  {
    return this->Package_simpl_state_.Package_->Files_present ();
  }

  const ::megaxml::Files& Package_simpl::
  Files ()
  {
    return this->Package_simpl_state_.Package_->Files ();
  }

  bool Package_simpl::
  Command_next ()
  {
    return this->Package_simpl_state_.Command_ != 
    this->Package_simpl_state_.Command_end_;
  }

  ::std::string Package_simpl::
  Command ()
  {
    return *this->Package_simpl_state_.Command_++;
  }

  // Host_simpl
  //

  Host_simpl::
  Host_simpl ()
  : Host_sskel (&base_impl_)
  {
  }

  void Host_simpl::
  pre (const ::megaxml::Host& x)
  {
    this->base_impl_.pre (x);
    this->Host_simpl_state_.Host_ = &x;
  }

  // Build_simpl
  //

  void Build_simpl::
  pre (const ::megaxml::Build& x)
  {
    this->Build_simpl_state_.Build_ = &x;
  }

  ::std::string Build_simpl::
  Name ()
  {
    return this->Build_simpl_state_.Build_->Name ();
  }

  ::std::string Build_simpl::
  CompilerFlags ()
  {
    return this->Build_simpl_state_.Build_->CompilerFlags ();
  }

  ::std::string Build_simpl::
  LinkerFlags ()
  {
    return this->Build_simpl_state_.Build_->LinkerFlags ();
  }

  // Defaults_simpl
  //

  void Defaults_simpl::
  pre (const ::megaxml::Defaults& x)
  {
    this->Defaults_simpl_state_.Defaults_ = &x;
  }

  // Project_simpl
  //

  void Project_simpl::
  pre (const ::megaxml::Project& x)
  {
    this->Project_simpl_state_.Project_ = &x;
    this->Project_simpl_state_.Package_ = 
    this->Project_simpl_state_.Project_->Package ().begin ();
    this->Project_simpl_state_.Package_end_ = 
    this->Project_simpl_state_.Project_->Package ().end ();
    this->Project_simpl_state_.Build_ = 
    this->Project_simpl_state_.Project_->Build ().begin ();
    this->Project_simpl_state_.Build_end_ = 
    this->Project_simpl_state_.Project_->Build ().end ();
    this->Project_simpl_state_.Run_ = 
    this->Project_simpl_state_.Project_->Run ().begin ();
    this->Project_simpl_state_.Run_end_ = 
    this->Project_simpl_state_.Project_->Run ().end ();
  }

  ::std::string Project_simpl::
  Host ()
  {
    return this->Project_simpl_state_.Project_->Host ();
  }

  bool Project_simpl::
  Description_present ()
  {
    return this->Project_simpl_state_.Project_->Description_present ();
  }

  ::std::string Project_simpl::
  Description ()
  {
    return this->Project_simpl_state_.Project_->Description ();
  }

  bool Project_simpl::
  Package_next ()
  {
    return this->Project_simpl_state_.Package_ != 
    this->Project_simpl_state_.Package_end_;
  }

  ::std::string Project_simpl::
  Package ()
  {
    return *this->Project_simpl_state_.Package_++;
  }

  bool Project_simpl::
  Files_present ()
  {
    return this->Project_simpl_state_.Project_->Files_present ();
  }

  const ::megaxml::Files& Project_simpl::
  Files ()
  {
    return this->Project_simpl_state_.Project_->Files ();
  }

  bool Project_simpl::
  Build_next ()
  {
    return this->Project_simpl_state_.Build_ != 
    this->Project_simpl_state_.Build_end_;
  }

  const ::megaxml::Build& Project_simpl::
  Build ()
  {
    return *this->Project_simpl_state_.Build_++;
  }

  bool Project_simpl::
  Run_next ()
  {
    return this->Project_simpl_state_.Run_ != 
    this->Project_simpl_state_.Run_end_;
  }

  const ::megaxml::Run& Project_simpl::
  Run ()
  {
    return *this->Project_simpl_state_.Run_++;
  }

  bool Project_simpl::
  Defaults_present ()
  {
    return this->Project_simpl_state_.Project_->Defaults_present ();
  }

  const ::megaxml::Defaults& Project_simpl::
  Defaults ()
  {
    return this->Project_simpl_state_.Project_->Defaults ();
  }

  // Files_simpl
  //

  void Files_simpl::
  pre (const ::megaxml::Files& x)
  {
    this->Files_simpl_state_.Files_ = &x;
    this->Files_simpl_state_.System_ = 
    this->Files_simpl_state_.Files_->System ().begin ();
    this->Files_simpl_state_.System_end_ = 
    this->Files_simpl_state_.Files_->System ().end ();
    this->Files_simpl_state_.Include_ = 
    this->Files_simpl_state_.Files_->Include ().begin ();
    this->Files_simpl_state_.Include_end_ = 
    this->Files_simpl_state_.Files_->Include ().end ();
    this->Files_simpl_state_.Source_ = 
    this->Files_simpl_state_.Files_->Source ().begin ();
    this->Files_simpl_state_.Source_end_ = 
    this->Files_simpl_state_.Files_->Source ().end ();
    this->Files_simpl_state_.Library_ = 
    this->Files_simpl_state_.Files_->Library ().begin ();
    this->Files_simpl_state_.Library_end_ = 
    this->Files_simpl_state_.Files_->Library ().end ();
  }

  bool Files_simpl::
  System_next ()
  {
    return this->Files_simpl_state_.System_ != 
    this->Files_simpl_state_.System_end_;
  }

  ::std::string Files_simpl::
  System ()
  {
    return *this->Files_simpl_state_.System_++;
  }

  bool Files_simpl::
  Include_next ()
  {
    return this->Files_simpl_state_.Include_ != 
    this->Files_simpl_state_.Include_end_;
  }

  ::std::string Files_simpl::
  Include ()
  {
    return *this->Files_simpl_state_.Include_++;
  }

  bool Files_simpl::
  Source_next ()
  {
    return this->Files_simpl_state_.Source_ != 
    this->Files_simpl_state_.Source_end_;
  }

  ::std::string Files_simpl::
  Source ()
  {
    return *this->Files_simpl_state_.Source_++;
  }

  bool Files_simpl::
  Library_next ()
  {
    return this->Files_simpl_state_.Library_ != 
    this->Files_simpl_state_.Library_end_;
  }

  ::std::string Files_simpl::
  Library ()
  {
    return *this->Files_simpl_state_.Library_++;
  }

  // EG_simpl
  //

  void EG_simpl::
  pre (const ::megaxml::EG& x)
  {
    this->EG_simpl_state_.EG_ = &x;
  }

  EG_sskel::choice_arm_tag EG_simpl::
  choice_arm ()
  {
    choice_arm_tag t (static_cast< choice_arm_tag > (
                        this->EG_simpl_state_.EG_->choice_arm ()));
    return t;
  }

  const ::megaxml::Package& EG_simpl::
  Package ()
  {
    return this->EG_simpl_state_.EG_->Package ();
  }

  const ::megaxml::Host& EG_simpl::
  Host ()
  {
    return this->EG_simpl_state_.EG_->Host ();
  }

  const ::megaxml::Project& EG_simpl::
  Project ()
  {
    return this->EG_simpl_state_.EG_->Project ();
  }

  // Directories_simpl
  //

  void Directories_simpl::
  pre (const ::megaxml::Directories& x)
  {
    this->Directories_simpl_state_.Directories_ = &x;
    this->Directories_simpl_state_.Include_ = 
    this->Directories_simpl_state_.Directories_->Include ().begin ();
    this->Directories_simpl_state_.Include_end_ = 
    this->Directories_simpl_state_.Directories_->Include ().end ();
    this->Directories_simpl_state_.Library_ = 
    this->Directories_simpl_state_.Directories_->Library ().begin ();
    this->Directories_simpl_state_.Library_end_ = 
    this->Directories_simpl_state_.Directories_->Library ().end ();
  }

  bool Directories_simpl::
  Include_next ()
  {
    return this->Directories_simpl_state_.Include_ != 
    this->Directories_simpl_state_.Include_end_;
  }

  ::std::string Directories_simpl::
  Include ()
  {
    return *this->Directories_simpl_state_.Include_++;
  }

  bool Directories_simpl::
  Library_next ()
  {
    return this->Directories_simpl_state_.Library_ != 
    this->Directories_simpl_state_.Library_end_;
  }

  ::std::string Directories_simpl::
  Library ()
  {
    return *this->Directories_simpl_state_.Library_++;
  }

  // Run_simpl
  //

  void Run_simpl::
  pre (const ::megaxml::Run& x)
  {
    this->Run_simpl_state_.Run_ = &x;
    this->Run_simpl_state_.Argument_ = 
    this->Run_simpl_state_.Run_->Argument ().begin ();
    this->Run_simpl_state_.Argument_end_ = 
    this->Run_simpl_state_.Run_->Argument ().end ();
  }

  ::std::string Run_simpl::
  Name ()
  {
    return this->Run_simpl_state_.Run_->Name ();
  }

  ::std::string Run_simpl::
  Command ()
  {
    return this->Run_simpl_state_.Run_->Command ();
  }

  bool Run_simpl::
  Argument_next ()
  {
    return this->Run_simpl_state_.Argument_ != 
    this->Run_simpl_state_.Argument_end_;
  }

  ::std::string Run_simpl::
  Argument ()
  {
    return *this->Run_simpl_state_.Argument_++;
  }
}

namespace megaxml
{
  // EG_saggr
  //

  EG_saggr::
  EG_saggr ()
  {
    this->EG_s_.serializers (this->Package_s_,
                             this->Host_s_,
                             this->Project_s_);

    this->Package_s_.serializers (this->string_s_,
                                  this->Directories_s_,
                                  this->Files_s_,
                                  this->string_s_);

    this->Directories_s_.serializers (this->string_s_,
                                      this->string_s_);

    this->Host_s_.serializers (this->string_s_,
                               this->Directories_s_,
                               this->Files_s_,
                               this->string_s_);

    this->Project_s_.serializers (this->string_s_,
                                  this->string_s_,
                                  this->string_s_,
                                  this->Files_s_,
                                  this->Build_s_,
                                  this->Run_s_,
                                  this->Defaults_s_);

    this->Build_s_.serializers (this->string_s_,
                                this->string_s_,
                                this->string_s_);

    this->Run_s_.serializers (this->string_s_,
                              this->string_s_,
                              this->string_s_);

    this->Files_s_.serializers (this->string_s_,
                                this->string_s_,
                                this->string_s_,
                                this->string_s_);
  }

  const char* EG_saggr::
  root_name ()
  {
    return "EG";
  }

  const char* EG_saggr::
  root_namespace ()
  {
    return "";
  }
}

// Begin epilogue.
//
//
// End epilogue.

