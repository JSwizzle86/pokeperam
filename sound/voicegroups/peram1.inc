voice_group peram1
	voice_keysplit_all voicegroup_frlg_drumset                                                                  @ 0 drumkit
    voice_keysplit voicegroup_piano_keysplit, keysplit_piano                                                    @ 1 piano
    voice_directsound 60, 0, DirectSoundWaveData_steinway_b_piano, 128, 204, 51, 242                            @ 2 piano 2
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_low, 255, 249, 0, 188               @ 4 electric piano low
	voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_high, 255, 249, 0, 165              @ 5 electric piano high
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_2_alt 60, 0, 2, 0, 3, 0, 0                                                                     @ 8 PSG square_2_alt (mus_route101)
    voice_directsound 60, 0, DirectSoundWaveData_sc88pro_glockenspiel, 255, 165, 51, 235                        @ 9 glockenspiel
    voice_directsound 60, 0, DirectSoundWaveData_heart_of_asia_gamelan, 255, 188, 139, 239                      @ 10 gamelan
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_directsound 60, 0, DirectSoundWaveData_sc88pro_xylophone, 255, 235, 0, 204                            @ 13 xylophone
    voice_directsound 60, 0, DirectSoundWaveData_sc88pro_tubular_bell, 255, 165, 90, 216                        @ 14 bell
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_directsound 60, 0, DirectSoundWaveData_sc88pro_organ2, 255, 0, 255, 210                               @ 17 percussive organ
    voice_directsound 60, 0, DirectSoundWaveData_sc88pro_organ2, 37, 165, 180, 127                              @ 18 percussive organ (soft)
    voice_directsound 60, 0, DirectSoundWaveData_sc88pro_church_organ3_low, 255, 76, 154, 188                   @ 19 church organ low
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_church_organ3_high, 255, 76, 154, 188                  @ 20 church organ high
    voice_directsound 60, 0, DirectSoundWaveData_sc88pro_accordion, 255, 0, 255, 165                            @ 21 accordion
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_directsound 60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 255, 249, 25, 76                     @ 24 nylon string guitar
    voice_directsound 60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 128, 249, 25, 76                     @ 25 nylon string guitar (soft)
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_programmable_wave_alt 60, 0, ProgrammableWaveData_15, 0, 7, 15, 0                                     @ 28 PSG wave (mus_encounter_intense)
    voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 0, 255, 127              @ 29 overdrive guitar
    voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 255, 0, 255, 127        @ 30 distortion guitar high
    voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 0, 255, 127         @ 31 distortion guitar low
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fingered_bass, 255, 253, 0, 149                        @ 33 electric bass
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_directsound 60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 253, 0, 149                        @ 35 fretless bass
    voice_directsound 60, 0, DirectSoundWaveData_sc88pro_slap_bass, 255, 235, 128, 99                           @ 36 slap bass
    voice_square_2_alt 60, 0, 3, 0, 4, 4, 4                                                                     @ 37 PSG square_2_alt (mus_rg_vs_trainer)
    voice_directsound 60, 0, DirectSoundWaveData_sc88pro_synth_bass, 255, 252, 0, 115                           @ 38 synth bass
    voice_directsound 60, 0, DirectSoundWaveData_trinity_30303_mega_bass, 255, 178, 180, 165                    @ 39 synth bass 2
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_directsound 60, 0, DirectSoundWaveData_sc88pro_pizzicato_strings, 255, 226, 0, 99                     @ 45 pizzicato strings
    voice_directsound 60, 0, DirectSoundWaveData_sc88pro_harp, 255, 242, 51, 242                                @ 46 harp
    voice_directsound 60, 0, DirectSoundWaveData_sc88pro_timpani, 255, 246, 0, 226                              @ 47 timpani
	voice_keysplit voicegroup_strings_keysplit, keysplit_strings                                                @ 48 string ensemble
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_directsound 60, 0, DirectSoundWaveData_trinity_big_boned, 255, 165, 154, 127                          @ 50 synth strings
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_directsound 60, 0, DirectSoundWaveData_classical_choir_voice_ahhs, 255, 0, 255, 0                     @ 52 choir
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_directsound 60, 0, DirectSoundWaveData_unknown_female_voice, 128, 165, 128, 204                       @ 54 synth voice
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_keysplit voicegroup_trumpet_keysplit, keysplit_trumpet                                                @ 56 trumpet
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_keysplit voicegroup_tuba_keysplit, keysplit_tuba                                                      @ 58 tuba
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_keysplit voicegroup_french_horn_keysplit, keysplit_french_horn                                        @ 60 french horn
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_oboe, 43, 188, 103, 165                         @ 68 oboe
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_directsound 60, 0, DirectSoundWaveData_sc88pro_flute, 255, 127, 231, 127                              @ 73 flute
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_directsound 60, 0, DirectSoundWaveData_sd90_enhanced_delay_shaku, 255, 191, 97, 165                   @ 75 shakuhachi (mus_rg_poke_tower)
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_shakuhachi, 255, 0, 255, 204                    @ 77 shakuhachi 2 (mus_b_arena)
    voice_directsound 60, 0, DirectSoundWaveData_sd90_classical_whistle, 255, 0, 255, 127                       @ 78 whistle
    voice_square_2_alt 60, 0, 3, 0, 2, 4, 0                                                                     @ 79 PSG square_2_alt (mus_route101)
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_programmable_wave_alt 60, 0, ProgrammableWaveData_1, 0, 7, 7, 0                                       @ 82 PSG wave (mus_contest_results)
    voice_square_2_alt 60, 0, 0, 0, 1, 4, 1                                                                     @ 83 PSG square_2_alt (mus_encounter_intense)
    voice_programmable_wave_alt 60, 0, ProgrammableWaveData_1, 0, 7, 15, 1                                      @ 84 PSG wave (mus_route101)
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                     @ 85 AVOID
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0                                                                     @ 86 AVOID
    voice_programmable_wave_alt 60, 0, ProgrammableWaveData_5, 0, 7, 6, 2                                       @ 87 PSG wave (mus_slateport bass)
    voice_square_2 60, 0, 2, 0, 1, 1, 1                                                                         @ 88 PSG square_2 (mus_vs_wild)
	voice_square_1 60, 0, 0, 2, 0, 1, 1, 1                                                                      @ 89 PSG square_1 (mus_vs_wild)
    voice_square_2_alt 60, 0, 2, 1, 4, 4, 2                                                                     @ 90 PSG square_2_alt (mus_littleroot)
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_directsound 60, 0, DirectSoundWaveData_unknown_koto_high, 255, 0, 206, 242                            @ 106 koto high
    voice_directsound 60, 0, DirectSoundWaveData_unknown_koto_low, 255, 0, 206, 242                             @ 107 koto
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_directsound_no_resample 64, 24, DirectSoundWaveData_dance_drums_ride_bell, 255, 165, 103, 231         @ 112 percussion bell
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_directsound 63, 64, DirectSoundWaveData_sc88pro_taiko, 255, 0, 255, 0                                 @ 116 taiko
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_directsound_no_resample 64, 54, DirectSoundWaveData_sc88pro_orchestra_cymbal_crash, 8, 0, 255, 216    @ 119 reverse cymbal
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_directsound 60, 0, DirectSoundWaveData_sc88pro_bubbles, 255, 0, 255, 127                              @ 122 bubbles (mus_underwater)
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_square_1 60, 0, 0, 2, 0, 0, 15, 0
    voice_noise_alt 60, 0, 0, 0, 1, 0, 0                                                                        @ 126 PSG noise (mus_slateport)
	voice_noise_alt 60, 0, 0, 0, 1, 6, 1                                                                        @ 127 PSG noise (mus_rg_vs_wild)     
    
